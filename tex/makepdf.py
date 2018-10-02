#!/usr/bin/python
# -*- coding: cp936 -*-

import datetime
import os
import shutil
import sys
import time
import jinja2

class main:
	def __init__(self):
		self.main()
	def main(self):
		for i in range(100):
			if hasattr(main,"rd%d" %(i)):
				getattr(main,"rd%d" %(i))(self)
		t=file("ofbdep.txt","r").read().decode("gbk")
		tmpl=jinja2.Template(t)
		tex=file("ofbdep.tex","w")
		tex.write(tmpl.render(rd).encode("utf8"))
		tex.close()
		os.system("pdflatex ofbdep.tex")
	def rd1(self):
		print("ok")		
rd={}
main()
