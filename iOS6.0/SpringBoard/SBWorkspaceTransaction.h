/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BKSWorkspace, NSDate, NSMutableArray, SBAlertManager;

@interface SBWorkspaceTransaction : NSObject
{
    id <SBWorkspaceTransactionDelegate> _delegate;
    int _milestones;
    BKSWorkspace *_workspace;
    SBAlertManager *_alertManager;
    BOOL _didCommit;
    BOOL _completed;
    BOOL _interrupted;
    NSDate *_startTime;
    NSMutableArray *_keepAliveReasons;
}

@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(readonly, nonatomic) BKSWorkspace *workspace; // @synthesize workspace=_workspace;
@property(nonatomic) id <SBWorkspaceTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)selfAlertDidDeactivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfAlertWillDeactivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfAlertDidActivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfAlertWillActivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfApplicationExited:(id)arg1;
- (BOOL)selfApplicationLaunchDidFail:(id)arg1;
- (BOOL)selfApplicationActivated:(id)arg1;
- (BOOL)selfApplicationDidFinishLaunching:(id)arg1 withInfo:(id)arg2;
- (BOOL)selfApplicationDidStartLaunching:(id)arg1 withInfo:(id)arg2;
- (BOOL)selfApplicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (BOOL)selfApplicationWillBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (BOOL)selfWorkspaceDidResume;
- (BOOL)selfWorkspaceWillResume;
- (BOOL)selfWorkspaceDidSuspend;
- (BOOL)selfWorkspaceWillSuspend;
- (id)_stringForInterruptReason:(int)arg1;
- (id)_stringForMilestones:(int)arg1;
- (void)_enumerateMilestones:(int)arg1 usingBlock:(id)arg2;
- (id)_stringForMilestone:(int)arg1;
- (BOOL)_shouldBeWatchdogged:(id *)arg1;
- (double)_watchdogInterval;
- (BOOL)_enableWatchdog;
- (BOOL)alertDidDeactivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)alertWillDeactivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)alertDidActivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)alertWillActivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)applicationExited:(id)arg1;
- (BOOL)applicationLaunchDidFail:(id)arg1;
- (BOOL)applicationActivated:(id)arg1;
- (BOOL)applicationDidFinishLaunching:(id)arg1 withInfo:(id)arg2;
- (BOOL)applicationDidStartLaunching:(id)arg1 withInfo:(id)arg2;
- (BOOL)applicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (BOOL)applicationWillBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (BOOL)workspaceDidResume;
- (BOOL)workspaceWillResume;
- (BOOL)workspaceDidSuspend;
- (BOOL)workspaceWillSuspend;
- (void)_transactionComplete;
- (void)_interruptWithReason:(int)arg1;
- (BOOL)_canBeInterrupted;
- (void)_commit;
- (void)_keepalive_async:(id)arg1;
- (void)_endKeepAliveForReason:(id)arg1;
- (void)_keepAliveForReason:(id)arg1;
- (BOOL)_hasKeepAliveReason:(id)arg1;
- (BOOL)_checkAndRemoveMilestone:(int)arg1;
- (void)_notifyDelegateOfCompletion:(BOOL)arg1;
- (void)removeMilestonesAndCheckForCompletion:(int)arg1;
- (void)_checkAndReportIfMilestonesMet;
- (BOOL)milestonesMet;
- (BOOL)waitingForMilestone:(int)arg1;
- (void)removeMilestones:(int)arg1;
- (void)addMilestones:(int)arg1;
- (void)interruptWithReason:(int)arg1;
- (void)interrupt;
- (BOOL)canBeInterrupted;
- (BOOL)completed;
- (void)commit;
- (id)description;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2;

@end

