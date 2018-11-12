#!/usr/bin/python
# -*- coding: cp936 -*-

import datetime
import os
import shutil
import sys
import time
import jinja2

def cpt(t):
	import json
	print(json.dumps(t,encoding="gbk",ensure_ascii=False))

class main:
	def __init__(self):
		self.main()
	def main(self):
		self.field={}
		for l in file("../data/field.txt","r").readlines():
			d=l.decode("gbk").split("|")
			self.field[d[0]]=[d[1],d[2],d[3],d[4],d[5],d[6]]
		for i in range(100):
			if hasattr(main,"rd%d" %(i)):
				getattr(main,"rd%d" %(i))(self)
		t=file("ofbdep.txt","r").read().decode("gbk")
		tmpl=jinja2.Template(t)
		tex=file("ofbdep.tex","w")
		tex.write(tmpl.render(rd).encode("utf8"))
		tex.close()
		os.system("xelatex ofbdep.tex")
		os.system("xelatex ofbdep.tex")
	def rd1(self):	#处理基金业务类型表
		rd["servicetype"]=[]
		for l in file("../data/servicetype.txt","r").readlines():
			rd["servicetype"].append(l.decode("gbk").split("|"))
	def rd2(self):	#处理各业务的数据项
		for yw in ["001","101","002","102","004","005","006","008","058","158","020","021","022","122","123","024","124","125","026","126","029","129","130","031","131","032","132","033","133","036","136","143","144","146","149","150","052","152","054","155","156","157","059","159","061","161","062","162","067","167","169","070","080","180","098","198","088"]:
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
rd={}
main()
