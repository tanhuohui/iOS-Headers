/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreBookkeeper/SBKRequest.h>

@class SBKSyncTransaction;

// Not exported
@interface SBKSyncRequest : SBKRequest
{
    SBKSyncTransaction *_transaction;
}

+ (long long)bodyContentEncodingType;
+ (long long)bodyContentType;
+ (id)requestForTransaction:(id)arg1;
@property(retain, nonatomic) SBKSyncTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)newURLOperation;
- (id)canonicalResponseForResponse:(id)arg1;

@end

