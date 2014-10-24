//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBFWallpaperDefaults : NSObject
{
}

+ (id)defaults;
- (id)nameForVariant:(int)arg1;
- (void)setName:(id)arg1 forLocations:(int)arg2;
- (void)resetNameDefaults;
- (BOOL)isPortraitForVariant:(int)arg1;
- (void)setPortrait:(BOOL)arg1 forLocations:(int)arg2;
- (void)resetPortraitDefaults;
- (BOOL)magnifyEnabledForVariant:(int)arg1;
- (void)setMagnifyEnabled:(BOOL)arg1 forLocations:(int)arg2;
- (void)resetMagnifyDefaults;
- (BOOL)supportsCroppingForVariant:(int)arg1;
- (void)setSupportsCropping:(BOOL)arg1 forLocations:(int)arg2;
- (struct CGRect)cropRectForVariant:(int)arg1;
- (void)setCropRect:(struct CGRect)arg1 forLocations:(int)arg2;
- (void)resetCroppingDefaults;
- (float)zoomScaleForVariant:(int)arg1;
- (void)setZoomScale:(float)arg1 forLocations:(int)arg2;
- (void)resetZoomScaleDefaults;
- (float)parallaxFactorForVariant:(int)arg1;
- (void)setParallaxFactor:(float)arg1 forLocations:(int)arg2;
- (void)resetParallaxFactorDefaults;
- (void)setWallpaperOptions:(id)arg1 forLocations:(int)arg2;
- (void)resetDefaults;
- (id)description;

@end
