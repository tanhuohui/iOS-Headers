/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIKBCacheableView-Protocol.h"

@class UIKBTree;

@interface UIKBKeyView : UIView <UIKBCacheableView>
{
    UIKBTree *m_keyboard;
    UIKBTree *m_key;
    int m_state;
    struct CGPoint m_drawOrigin;
    struct __CFBoolean *m_allowsCaching;
}

@property(nonatomic) struct CGPoint drawOrigin; // @synthesize drawOrigin=m_drawOrigin;
@property(readonly, nonatomic) int state; // @synthesize state=m_state;
@property(readonly, nonatomic) UIKBTree *key; // @synthesize key=m_key;
@property(readonly, nonatomic) UIKBTree *keyboard; // @synthesize keyboard=m_keyboard;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL cacheDeferable;
- (void)displayLayer:(id)arg1;
- (BOOL)shouldCache;
- (id)cacheKey;
- (int)textEffectsVisibilityLevel;
- (void)dealloc;
- (void)updateForKeyboard:(id)arg1 key:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;

@end

