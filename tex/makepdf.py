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
		os.system("pdflatex ofbdep.tex")
	def rd1(self):	#处理基金业务类型表
		rd["servicetype"]=[]
		for l in file("../data/servicetype.txt","r").readlines():
			rd["servicetype"].append(l.decode("gbk").split("|"))
	def rd2(self):	#处理帐户信息数据
		rd["st001"]=[]
		for l in file("../data/st001.txt","r").readlines():
			d=l.decode("gbk").split("|")
			print(d)
			f=self.field[d[0]]
			print(f)
			h=[]
			if d[1][0]=="Y":
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
			rd["st001"].append(h)
rd={}
main()
