/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem
{
    NSString *_title;
    NSString *_body;
    NSString *_buttonTitle;
    double _autoDismissInterval;
}

- (id)initWithTitle:(id)arg1 body:(id)arg2;
- (void)dealloc;
- (double)autoDismissInterval;
- (void)setAutoDismissInterval:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setBodyText:(id)arg1;
- (id)title;
- (id)bodyText;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void)performUnlockAction;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)lockLabel;

@end

