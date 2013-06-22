/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUDetailedCellConfiguration.h>

@class NSString;

@interface IUPodcastCellConfiguration : IUDetailedCellConfiguration
{
    NSString *_displayReleaseDate;
    NSString *_displayTitle;
    NSString *_fullDisplayTitle;
}

+ (float)rowHeightForGlobalContext:(id)arg1;
- (void)reloadStringsWithProperties:(id)arg1;
- (id)displayProperties;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadData;
- (id)untruncationCalloutString;
- (struct CGPoint)downloadProgressIndicatorOrigin;
- (BOOL)canShowPurchasableMediaViews;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (float)alphaForImageAtIndex:(unsigned int)arg1 fromAlpha:(float *)arg2;
- (float)alphaForLabelAtIndex:(unsigned int)arg1 fromAlpha:(float *)arg2;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end
