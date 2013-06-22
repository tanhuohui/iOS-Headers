/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol APSTCPStreamDelegate <NSObject>
- (void)tcpStream:(id)arg1 errorOccured:(id)arg2;
- (void)tcpStreamEndEncountered:(id)arg1;
- (unsigned int)tcpStream:(id)arg1 dataReceived:(id)arg2;

@optional
- (BOOL)tcpStreamHasSpaceAvailable:(id)arg1;
- (void)tcpStreamHasConnected:(id)arg1;
- (void)tcpStream:(id)arg1 hasDeterminedServerHostname:(id)arg2;
- (void)tcpStream:(id)arg1 receivedServerBag:(id)arg2;
@end
