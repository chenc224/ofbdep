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
	def fmt(self,s):
		return s.replace("\n",",").encode("gbk").strip()
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
	def getinfo6(self):	#开户确认101的数据项
		self.gettableinfo("st101.txt")
	def getinfo7(self):	#销户申请002的数据项
		self.gettableinfo("st002.txt")
	def getinfo8(self):	#销户确认102等业务的数据项
		self.gettableinfo("st102.txt")
	def getinfo9(self):	#账户冻结申请004的数据项
		self.gettableinfo("st004.txt")
	def getinfo10(self):	#账户解冻申请005 账户卡解挂申请007
		self.gettableinfo("st005.txt")
	def getinfo11(self):	#基金账户卡挂失申请006
		self.gettableinfo("st006.txt")
	def getinfo12(self):	#增加交易账户申请008
		self.gettableinfo("st008.txt")
	def getinfo13(self):	#变更交易账号申请058
		self.gettableinfo("st058.txt")
	def getinfo14(self):	#变更交易账号确认158
		self.gettableinfo("st158.txt")
	def getinfo15(self):	#认购申请(020)，预约认购申请(021)
		self.gettableinfo("st020.txt")
	def getinfo16(self):	#认购确认(021)，预约认购确认(121)
		self.gettableinfo("st021.txt")
	def getinfo17(self):	#申购申请(022)，预约申购申请(023)，定时定额申购申请(039)
		self.gettableinfo("st022.txt")
	def getinfo18(self):	#申购确认(122)，定时定额申购确认(139)
		srow=""
		f=open("../doc/%s" %("st122.txt"),"w")
		for j in range(len(self.t.rows)):
			r=self.t.rows[j]
			srow=self.fmt(r.cells[0].text)+"|"+self.fmt(r.cells[6].text)+"|"+self.fmt(r.cells[7].text)
			print(srow)
			f.write(srow+"\n")
			srow=""
		f.close()
	def getinfo19(self):	#预约申购确认123
		self.gettableinfo("st123.txt")
	def getinfo20(self):	#赎回申请(024)，定时定额赎回申请(063)，预约赎回申请(025)
		self.gettableinfo("st024.txt")
	def getinfo21(self):	#赎回确认(124)，定时定额赎回确认(163)，强行赎回确认(142)
		self.gettableinfo("st124.txt")
	def getinfo22(self):	#预约赎回确认(125)
		self.gettableinfo("st125.txt")
	def getinfo23(self):	#转销售人/机构申请(026)，转销售人/机构转入申请(027)，转销售人/机构转出申请(028)
		self.gettableinfo("st026.txt")
	def getinfo24(self):	#转销售人/机构确认(126)，转销售人/机构转入确认(127)，转销售人/机构转出确认(128)
		self.gettableinfo("st126.txt")
	def getinfo25(self):	#设置分红方式申请029
		self.gettableinfo("st029.txt")
	def getinfo26(self):	#设置分红方式确认129
		self.gettableinfo("st129.txt")
	def getinfo27(self):	#认购结果130
		self.gettableinfo("st130.txt")
	def getinfo28(self):	#基金份数冻结申请031
		self.gettableinfo("st031.txt")
	def getinfo29(self):	#基金份数冻结确认131
		self.gettableinfo("st131.txt")
	def getinfo30(self):	#基金份数解冻申请032
		self.gettableinfo("st032.txt")
	def getinfo31(self):	#基金份数解冻确认132
		self.gettableinfo("st132.txt")
	def getinfo32(self):	#非交易过户申请(033)，非交易过户转入申请(034)，非交易过户转出申请(035)
		self.gettableinfo("st033.txt")
	def getinfo33(self):	#非交易过户确认(133)，非交易过户转入确认(134)，非交易过户转出确认(135)
		self.gettableinfo("st133.txt")
	def getinfo34(self):	#基金转换申请(036)，基金转换转入申请(037)，基金转换转出申请(038)
		self.gettableinfo("st036.txt")
	def getinfo35(self):	#基金转换确认(136)，基金转换转入确认(137)，基金转换转出确认(138)
		self.gettableinfo("st136.txt")
	def getinfo36(self):	#红利/红利再投资发放(143)
		self.gettableinfo("st143.txt")
	def getinfo37(self):	#强行调增(144) ，强行调减(145)
		self.gettableinfo("st144.txt")
	def getinfo38(self):	#配号146
		self.gettableinfo("st146.txt")
	def getinfo39(self):	#募集失败149
		self.gettableinfo("st149.txt")
	def getinfo40(self):	#基金清盘(150)，基金终止(151)
		self.gettableinfo("st150.txt")
	def getinfo41(self):	#撤单(052)，撤预约单(053)
		self.gettableinfo("st052.txt")
	def getinfo42(self):	#撤单确认(152)，撤预约单确认(153)
		self.gettableinfo("st152.txt")
	def getinfo43(self):	#无效资金(054)
		self.gettableinfo("st054.txt")
	def getinfo44(self):	#基金销售人资金清算（155）
		self.gettableinfo("st155.txt")
	def getinfo45(self):	#投资人资金清算（156）
		self.gettableinfo("st156.txt")
	def getinfo46(self):	#红利解冻确认（157）
		self.gettableinfo("st157.txt")
	def getinfo47(self):	#定时定额注册申请（059），定时定额注销申请（060）
		self.gettableinfo("st059.txt")
	def getinfo48(self):	#定时定额注册确认（159），定时定额注销确认（160）
		self.gettableinfo("st159.txt")
	def getinfo49(self):	#定时定额变更申请（061）
		self.gettableinfo("st061.txt")
	def getinfo50(self):	#定时定额变更确认（161）
		self.gettableinfo("st161.txt")
	def getinfo51(self):	#认购调整申请(062)
		self.gettableinfo("st062.txt")
	def getinfo52(self):	#认购调整确认(162)
		self.gettableinfo("st162.txt")
	def getinfo53(self):	#基金联名卡开通申请（067），基金联名卡撤销申请（068）
		self.gettableinfo("st067.txt")
	def getinfo54(self):	#基金联名卡开通确认（167），基金联名卡撤销确认（168）
		self.gettableinfo("st167.txt")
	def getinfo55(self):	#积分确认（169）
		self.gettableinfo("st169.txt")
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
		for j in range(1,len(self.t.rows)):
			r=self.t.rows[j]
			srow=self.fmt(r.cells[0].text)+"|"+self.fmt(r.cells[5].text)+"|"+self.fmt(r.cells[6].text)
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
