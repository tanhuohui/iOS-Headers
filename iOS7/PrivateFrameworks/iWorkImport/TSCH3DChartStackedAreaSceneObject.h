/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartAreaSceneObject.h>

// Not exported
@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject
{
}

+ (float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2;
+ (float)chartSeriesDepthOffsetFactor;
+ (float)chartSeriesDepth;
+ (float)chartSeriesPolygonOffset;
+ (id)chartSeriesType;
- (void)sortElements:(vector_cd7372eb *)arg1 pipeline:(id)arg2;
- (float)depthForScene:(id)arg1;
- (_Bool)transparencyDepthMask;

@end

