//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@interface SAMPLoadPredefinedQueue : SADomainCommand
{
}

+ (id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)loadPredefinedQueue;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL shouldShuffle;
@property(nonatomic) int mediaItemType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

