/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CHAutoStyling <NSObject>
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(int)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(int)arg2 isLine:(_Bool)arg3;
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(int)arg2;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(int)arg2;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(int)arg3;
- (id)autoStrokeForSeriesIndex:(int)arg1;
- (id)autoAxisStroke;
@end
