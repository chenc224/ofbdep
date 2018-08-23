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
		f=open("../doc/field.txt","w")
		for j in range(len(self.t.rows)):
			r=self.t.rows[j]
			for cell in r.cells:
				t=cell.text.replace("\n",",").encode("gbk")
				if len(row)==1 and row[0]==t:	#读入的word文档格式错乱，有时候会多一列，只能用这样的笨办法跳过
					continue
				if len(row)==2 and t not in ["A","C","N","类型"]:
					print("格式错误:"+srow+t)
					sys.exit(1)
				if len(row)==3:
					num=filter(str.isdigit,t)
					row.append(num)
					srow=srow+num+"|"
					if row[2]=="N":
						ext=["零","一","二","三","四","五","六","七","八","九"]
						for i in range(1,len(ext)):
							if t.find(ext[i])>0:
								row.append("%d" %(i))
								srow=srow+"%d" %(i)+"|"
								print("%s %d" %(t,i))
						if len(row)==4:
							row.append("0")
							srow=srow+"0|"
					else:
						row.append("")
						srow=srow+"|"
				else:
					row.append(t)
					srow=srow+t+"|"
				if len(row)==7:
					print(srow)
					f.write(srow+"\n")
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
