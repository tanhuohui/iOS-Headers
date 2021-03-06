/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSNumber, NSString, SUStorePageViewController, UISegmentedControl;

@interface SUScriptSegmentedControl : SUScriptObject
{
    NSArray *_segments;
    int _selectedIndex;
    int _style;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_setRawSegments:(id)arg1;
- (int)_sectionsStyleForString:(id)arg1;
- (void)_reloadViewControllerPageSectionGroup;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)_newNativeSegmentedControl;
@property(readonly, nonatomic) SUStorePageViewController *storePageViewController;
@property(readonly, nonatomic) NSArray *rawSegments;
@property(readonly, nonatomic) UISegmentedControl *activeSegmentedControl;
- (int)_style;
- (void)_setStyle:(int)arg1;
- (void)_setSelectedIndex:(int)arg1;
- (void)_setSegments:(id)arg1;
- (int)_selectedIndex;
- (id)_copySegments;
@property(retain) NSString *style;
@property(retain) NSNumber *selectedIndex;
@property(retain) id segments;
- (void)setNoSegmentIndex:(id)arg1;
@property(readonly) NSNumber *noSegmentIndex;
- (id)_className;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)newPageSectionGroup;
@property(readonly, nonatomic) int nativeSelectedIndex;
@property(readonly, nonatomic) UISegmentedControl *nativeSegmentedControl;
- (void)dealloc;
- (id)initWithPageSectionGroup:(id)arg1;
- (id)init;

@end

