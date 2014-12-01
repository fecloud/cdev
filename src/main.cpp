/*
 * main.c
 *
 *  Created on: 2014-12-1
 *      Author: Administrator
 */
#include <stdio.h>
#include "RTMPStream.h"

int main(int argc,char* argv[])
{
    CRTMPStream rtmpSender;

    bool bRet = rtmpSender.Connect("rtmp://10.0.0.2/live/test");

    if(bRet){
    	rtmpSender.SendH264File("/hdd/f/h264/test.h264");

    }
    rtmpSender.Close();
}

