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
		print("�������:%d" %(len(self.f.tables)))
		for i in range(len(self.f.tables)):
			self.t=self.f.tables[i]
			if self.arg in ["","all"] or self.arg=="%d" %(i):
				self.printtable(i)
			if hasattr(main,"getinfo%d" %(i)):
				if self.arg=="%d" %(i) or self.arg=="all":
					print("::::::run getinfo%d" %(i))
					getattr(main,"getinfo%d" %(i))(self)
	def getfield(self,filename):	#ȡ���ļ����ֶα�
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
	def getinfo4(self):	#����ҵ������ ����ҵ�����뼰ȷ�ϴ����
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
	def getinfo5(self):	#��������001���ʻ���Ϣ�޸�����003��������
		self.gettableinfo("st001.txt")
	def getinfo69(self):	#01 �ʻ�����
		self.getfield("01.txt")
	def getinfo70(self):	#02 �ʻ�ȷ��
		self.getfield("02.txt")
	def getinfo71(self):	#03 ��������
		self.getfield("03.txt")
	def getinfo72(self):	#04 ����ȷ��
		self.getfield("04.txt")
	def getinfo73(self):	#05 ����
		self.getfield("05.txt")
	def getinfo74(self):	#06 �ֺ�
		self.getfield("06.txt")
	def getinfo75(self):	#07 ��̬��Ϣ�������顢��ֵ�ļ���
		self.getfield("07.txt")
	def getinfo76(self):	#08 ����
		self.getfield("08.txt")
	def getinfo77(self):	#09 ��������
		self.getfield("09.txt")
	def getinfo78(self):	#10 �ս�������
		self.getfield("10.txt")
	def getinfo79(self):	#11 TA���͵�ҵ���������
		self.getfield("11.txt")
	def getinfo80(self):	#12 TA���͵�ҵ��ȷ�ϻ���
		self.getfield("12.txt")
	def getinfo81(self):	#13 �����˷��͵�ҵ���������
		self.getfield("13.txt")
	def getinfo82(self):	#21 �����˼�����ϯλ
		self.getfield("21.txt")
	def getinfo83(self):	#23 ����������(����ȷȨ��������ҵ��
		self.getfield("23.txt")
	def getinfo84(self):	#24 ������ȷ��(����ȷȨ��������������ȷ��ҵ��
		self.getfield("24.txt")
	def getinfo85(self):	#25 �ʽ������ļ�
		self.getfield("25.txt")
	def getinfo86(self):	#26 ��Ʋ�Ʒ�ݶ���ϸ
		self.getfield("26.txt")
	def getinfo87(self):	#R1 �Ǿ�����˰��Ϣ�걨
		self.getfield("R1.txt")
	def getinfo88(self):	#R2 �Ǿ�����˰��Ϣȷ��
		self.getfield("R2.txt")
	def getinfo89(self):	#c1 �����������
		self.getfield("c1.txt")
	def getinfo90(self):	#c2 ��������ϵ
		self.getfield("c2.txt")
	def getinfo91(self):	#c3 ����ת����ϵ����
		self.getfield("c3.txt")
	def getinfo92(self):	#c4 ����ֺ췽������ ע��ȡ����c4�ļ�������
		self.getfield("c4.txt")
	def getinfo93(self):	#c5 �������
		self.getfield("c5.txt")
	def getinfo94(self):	#c6 ��Ʋ�Ʒ���������
		self.getfield("c6.txt")
	def getinfo95(self):	#ȡ�����ֵ��
		srow=""
		row=[]
		f=open("../doc/field.txt","w")
		for j in range(len(self.t.rows)):
			r=self.t.rows[j]
			for cell in r.cells:
				t=cell.text.replace("\n",",").encode("gbk").strip()
				if len(row)==1 and row[0]==t:	#�����word�ĵ���ʽ���ң���ʱ����һ�У�ֻ���������ı��취����
					continue
				if len(row)==2 and t not in ["A","C","N","����"]:
					print("��ʽ����:"+srow+t)
					sys.exit(1)
				if len(row)==3:
					num=filter(str.isdigit,t)
					row.append(num)
					srow=srow+num+"|"
					if row[2]=="N":
						ext=["��","һ","��","��","��","��","��","��","��","��"]
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
	def gettableinfo(self,filename):	#ȡ�����ݣ����ڻ�ȡ���׶�Ӧ���ֶα�
		srow=""
		f=open("../doc/%s" %(filename),"w")
		for j in range(len(self.t.rows)):
			r=self.t.rows[j]
			srow=r.cells[0].text.replace("\n",",").encode("gbk").strip()+"|"+r.cells[6].text.replace("\n",",").encode("gbk").strip()
			print(srow)
			f.write(srow+"\n")
			srow=""
		f.close()
	def printtable(self,tno):	#������
		print("================��%d�ű�" %(tno))
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
