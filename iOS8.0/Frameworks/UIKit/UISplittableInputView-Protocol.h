//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol UISplittableInputView <NSObject>
- (void)didEndSplitTransition;
- (void)willBeginSplitTransition;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)updateMergedSubviewConstraints;
- (void)layoutMergedSubviews;
@end

