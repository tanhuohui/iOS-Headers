/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableView.h>

@class UISearchDisplayController;

@interface UISearchResultsTableView : UITableView
{
    UISearchDisplayController *_controller;
}

@property(nonatomic) UISearchDisplayController *controller; // @synthesize controller=_controller;
- (float)_offsetForNoResultsMessage;
- (void)_numberOfRowsDidChange;
- (void)setContentOffset:(struct CGPoint)arg1;

@end
