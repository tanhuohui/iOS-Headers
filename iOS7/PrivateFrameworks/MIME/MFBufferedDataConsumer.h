/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFGuaranteedCollectingDataConsumer-Protocol.h"

@class NSArray, NSMutableData, NSString;

@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer>
{
    NSMutableData *_data;
    int _fd;
    NSString *_path;
    NSArray *_stack;
}

- (void)done;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)init;

@end

