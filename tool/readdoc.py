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
			if self.arg in ["","all"] or self.arg=="%d" %(i):
				self.printtable(i)
			if hasattr(main,"getinfo%d" %(i)):
				if self.arg=="%d" %(i) or self.arg=="all":
					print("::::::run getinfo%d" %(i))
					getattr(main,"getinfo%d" %(i))(self)
	def getfield(self,filename):	#取各文件的字段表
		srow=""
		f=open("../doc/%s" %(filename),"w")
		for j in range(len(self.t.rows)):
			r=self.t.rows[j]
			for cell in r.cells:
				t=cell.text.replace("\n",",").encode("gbk")
				srow=srow+t+"|"
			print(srow)
			f.write(srow+"\n")
			srow=""
		f.close()
	def getinfo4(self):	#基金业务类型 即各业务申请及确认代码表
		srow=""
		f=open("../doc/servicetype.txt","w")
		for j in range(len(self.t.rows)):
			r=self.t.rows[j]
			for cell in r.cells:
				t=cell.text.replace("\n",",").encode("gbk")
				srow=srow+t+"|"
			print(srow)
			f.write(srow+"\n")
			srow=""
		f.close()
	def getinfo5(self):	#开户申请001及帐户信息修改申请003的数据项
		self.gettableinfo("st001.txt")
	def getinfo69(self):	#01 帐户申请
		self.getfield("01.txt")
	def getinfo70(self):	#02 帐户确认
		self.getfield("02.txt")
	def getinfo71(self):	#03 交易申请
		self.getfield("03.txt")
	def getinfo72(self):	#04 交易确认
		self.getfield("04.txt")
	def getinfo73(self):	#05 对帐
		self.getfield("05.txt")
	def getinfo74(self):	#06 分红
		self.getfield("06.txt")
	def getinfo75(self):	#07 动态信息（即行情、净值文件）
		self.getfield("07.txt")
	def getinfo76(self):	#08 公告
		self.getfield("08.txt")
	def getinfo77(self):	#09 红利汇总
		self.getfield("09.txt")
	def getinfo78(self):	#10 日交割数据
		self.getfield("10.txt")
	def getinfo79(self):	#11 TA发送的业务申请汇总
		self.getfield("11.txt")
	def getinfo80(self):	#12 TA发送的业务确认汇总
		self.getfield("12.txt")
	def getinfo81(self):	#13 销售人发送的业务申请汇总
		self.getfield("13.txt")
	def getinfo82(self):	#21 参与人及结算席位
		self.getfield("21.txt")
	def getinfo83(self):	#23 其它类申请(包含确权、联名卡业务）
		self.getfield("23.txt")
	def getinfo84(self):	#24 其它类确认(包含确权、联名卡、积分确认业务）
		self.getfield("24.txt")
	def getinfo85(self):	#25 资金清算文件
		self.getfield("25.txt")
	def getinfo86(self):	#26 理财产品份额明细
		self.getfield("26.txt")
	def getinfo87(self):	#R1 非居民涉税信息申报
		self.getfield("R1.txt")
	def getinfo88(self):	#R2 非居民涉税信息确认
		self.getfield("R2.txt")
	def getinfo89(self):	#c1 基金基础参数
		self.getfield("c1.txt")
	def getinfo90(self):	#c2 基金代理关系
		self.getfield("c2.txt")
	def getinfo91(self):	#c3 基金转换关系参数
		self.getfield("c3.txt")
	def getinfo92(self):	#c4 基金分红方案参数 注意取到的c4文件有问题
		self.getfield("c4.txt")
	def getinfo93(self):	#c5 基金费率
		self.getfield("c5.txt")
	def getinfo94(self):	#c6 理财产品可赎回日期
		self.getfield("c6.txt")
	def getinfo95(self):	#取数据字典表
		srow=""
		row=[]
		f=open("../doc/field.txt","w")
		for j in range(len(self.t.rows)):
			r=self.t.rows[j]
			for cell in r.cells:
				t=cell.text.replace("\n",",").encode("gbk").strip()
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
	def gettableinfo(self,filename):	#取表数据，用于获取交易对应的字段表
		srow=""
		f=open("../doc/%s" %(filename),"w")
		for j in range(len(self.t.rows)):
			r=self.t.rows[j]
			srow=r.cells[0].text.replace("\n",",").encode("gbk").strip()+"|"+r.cells[6].text.replace("\n",",").encode("gbk").strip()
			print(srow)
			f.write(srow+"\n")
			srow=""
		f.close()
	def printtable(self,tno):	#输出表格
		print("================第%d张表" %(tno))
		for j in range(len(self.t.rows)):
			if j>5:break
			r=self.t.rows[j]
			for cell in r.cells:
				print("%s|" %(cell.text)),
#			for k in range(len(r.cells)-2):
#				print("%d|%s|" %(k,r.cells[k].text))
#				print("%d|%s|" %(k,self.t.cell(j,k).text))
			print("")

main()
