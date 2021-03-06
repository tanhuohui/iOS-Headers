//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class NSArray, NSMutableArray;

@interface HKSampleQuery : HKQuery
{
    unsigned int _limit;
    NSArray *_sortDescriptors;
    NSMutableArray *_results;
    CDUnknownBlockType _resultHandler;
}

+ (void)_configureClientInterface:(id)arg1;
+ (id)_clientInterfaceProtocol;
@property(readonly, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_validate;
- (CDUnknownBlockType)_queue_errorHandler;
- (void)_queue_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)deliverResultsBatch:(id)arg1 final:(BOOL)arg2 error:(id)arg3 forQueryUUID:(id)arg4 confirmationBlock:(CDUnknownBlockType)arg5;
@property(readonly, copy) NSArray *sortDescriptors;
@property(readonly) unsigned int limit;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;

@end

