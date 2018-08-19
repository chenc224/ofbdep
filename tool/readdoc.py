#!/usr/bin/python
# -*- coding: cp936 -*-

import datetime
import os
import shutil
import sys
import time
import docx

def cpt(t):
	import json
	print(json.dumps(t,encoding="gbk",ensure_ascii=False))

class main:
	def __init__(self):
		if len(sys.argv)==1:
			self.arg=""
		else:
			self.arg=sys.argv[1]
		self.main()
	def main(self):
#		self.f=docx.Document("ID.docx")
		self.f=docx.Document("ofbdep.docx")
		print("表格总数:%d" %(len(self.f.tables)))
		for i in range(len(self.f.tables)):
			self.t=self.f.tables[i]
			if self.arg=="all":
				self.printtable(i)
			if hasattr(main,"getinfo%d" %(i)):
				if self.arg=="%d" %(i) or self.arg=="":
					print("::::::run getinfo%d" %(i))
					if self.arg!="all":
						self.printtable(i)
					getattr(main,"getinfo%d" %(i))(self)
	def getinfo95(self):	#取数据字典表
		srow=""
		row=[]
		for j in range(len(self.t.rows)):
			r=self.t.rows[j]
			for cell in r.cells:
				t=cell.text.replace("\n",",")
				if len(row)==2 and t not in ["A","C","N",u"类型"]:
					print(u"格式错误:"+srow+t)
					sys.exit(1)
				if len(row)!=1 or row[0]!=t:
					row.append(t)
					srow=srow+t+"|"
				if len(row)==6:
					print(srow)
					srow=""
					row=[]
	def printtable(self,tno):	#输出表格
		print("================第%d张表" %(tno))
		for j in range(len(self.t.rows)):
			if j>5:break
			r=self.t.rows[j]
			for cell in r.cells:
				print("%s|" %(cell.text))
#			for k in range(len(r.cells)-2):
#				print("%d|%s|" %(k,r.cells[k].text))
#				print("%d|%s|" %(k,self.t.cell(j,k).text))
			print("")

main()
