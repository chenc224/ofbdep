#!/usr/bin/python
# -*- coding: cp936 -*-

import datetime
import jinja2
import json
import os
import shutil
import sys
import time

def cpt(t):
	import json
	print(json.dumps(t,encoding="gbk",ensure_ascii=False))

rd={}

class main:
	def __init__(self):
		self.main()
	def main(self):
		self.field={}
		rd["fieldlist"]=[]
		for l in file("../data/field.txt","r").readlines():
			d=l.decode("gbk").split("|")
			self.field[d[0]]=[d[1],d[2],d[3],d[4],d[5],d[6]]
		rd["fbindex"]=json.load(open("../data/index.json",'r'),encoding="gbk")	#数据文件、业务类型清单
		for i in range(100):
			if hasattr(main,"rd%d" %(i)):
				getattr(main,"rd%d" %(i))(self)
		t=open("ofbdep_data.template","r").read().decode("gbk")
		tmpl=jinja2.Template(t)
		cf=file("ofbdep_data.c","w")
		cf.write(tmpl.render(rd).encode("gbk"))
		cf.close()
	def rd1(self):	#处理基金业务类型表
		rd["servicetype"]=[]
		for l in file("../data/servicetype.txt","r").readlines():
			rd["servicetype"].append(l.decode("gbk").split("|"))
	def rd2(self):	#处理各业务的数据项
		businesslist=[]
		for fb in rd["fbindex"]:
			for df in fb["datafile"]:
				for bs in df["business"]:
					if bs["equcode"] not in businesslist:businesslist.append(bs["equcode"].encode("gbk"))
		for yw in businesslist:
			rd["st"+yw]=[]
			for l in file("../data/st%s.txt" %(yw),"r").readlines():
				d=l.decode("gbk").split("|")
				f=self.field[d[0]]
				h=[]
				if d[2][0]=="Y":
					h.append(d[0]+"*")
				else:
					h.append(d[0])
				h.append(f[0])
				if f[1]=="N":
					h.append("%s%s.%s" %(f[1],f[2],f[3]))
				else:
					h.append("%s%s" %(f[1],f[2]))
				h.append(f[4])
				h.append(f[5])
				h.append(d[1])
				rd["st"+yw].append(h)
	def rd3(self):	#处理 数据文件字段 sjwjzd
		rd["sjwjzd"]=[]
		filelist=[]
		fileinfo={}
		for fb in rd["fbindex"]:
			for df in fb["datafile"]:
				if df["mark"] not in filelist:
					filelist.append(df["mark"])
					fileinfo[df["mark"]]=df["describe"]
		filelist.sort()
		for wj in filelist:
			data=[]
			wz=1	#位置
			if not os.path.isfile("../data/%s.txt" %(wj)):
				continue
			for l in file("../data/%s.txt" %(wj),"r").readlines():
				d=l.decode("gbk").split("|")
				f=self.field[d[0]]
				h=[]
				if len(d)==8 and d[6][0]=='Y':	#最后一列是“是否必需”而且是Y
					h.append(d[0]+"*")
				else:
					h.append(d[0])
				h.append(f[0])
				if f[1]=="N":
					h.append("%s%s.%s" %(f[1],f[2],f[3]))
				else:
					h.append("%s%s" %(f[1],f[2]))
				h.append("%d" %(wz))
				wz=wz+int(f[2])
				h.append(f[4])
				h.append(f[5])
				h.append(d[5])
				data.append(h)
			rd["sjwjzd"].append({"section":wj+fileinfo[wj],"data":data})
	def rd4(self):	#处理数据文件字段表
		rd["fieldlist"]=[]
		for l in file("../data/field.txt","r").readlines():
			d=l.decode("gbk").split("|")
			h=[]
			while len(rd["fieldlist"])<int(d[0]):
				rd["fieldlist"].append(["","C","0","0",""])
			h.append(d[1])
			h.append(d[2])
			h.append(d[3])
			if d[2]=="N":
				h.append("%s" %(d[4]))
			else:
				h.append("0")
			h.append(d[5])
			rd["fieldlist"].append(h)
		rd["ofbdep_field_count"]=len(rd["fieldlist"])
	def rd5(self):	#处理返回码数据字典
		rd["returncode"]=[]
		for l in file("../data/returncode.txt","r").readlines():
			d=l.decode("gbk").split("|")
			rd["returncode"].append(d)
	def rd6(self):	#
		rd["datafile_field"]=[]
		filelist=[]
		fileinfo={}
		for fb in rd["fbindex"]:
			for df in fb["datafile"]:
				if df["mark"] not in filelist:
					filelist.append(df["mark"])
					fileinfo[df["mark"]]=df["describe"]
		filelist.sort()
		for wj in filelist:
			data=[]
			if not os.path.isfile("../data/%s.txt" %(wj)):
				continue
			js=0
			for l in file("../data/%s.txt" %(wj),"r").readlines():
				d=l.decode("gbk").split("|")
				data.append(d[0])
				js=js+1
			rd["datafile_field"].append({"name":wj,"field":data,"count":js})
		rd["datafile_field_count"]=len(rd["datafile_field"])
main()
