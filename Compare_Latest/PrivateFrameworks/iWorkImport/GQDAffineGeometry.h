/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

@interface GQDAffineGeometry : NSObject <GQDNameMappable>
{
    struct CGSize mNaturalSize;
    struct CGSize mSize;
    BOOL mSizesLocked;
    BOOL mAspectRatioLocked;
    struct CGPoint mPosition;
    float mAngle;
    BOOL mHorizontalFlip;
    BOOL mVerticalFlip;
    float mShearXAngle;
    float mShearYAngle;
}

+ (const struct StateSpec *)stateForReading;
+ (void)transformRect:(struct CGRect)arg1 transform:(id)arg2 upperLeft:(struct CGPoint *)arg3 lowerLeft:(struct CGPoint *)arg4 lowerRight:(struct CGPoint *)arg5 upperRight:(struct CGPoint *)arg6;
+ (struct CGRect)boundsOfTransformedRect:(struct CGRect)arg1 transform:(id)arg2;
- (struct CGSize)naturalSize;
- (void)setNaturalSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (BOOL)sizesLocked;
- (BOOL)aspectRatioLocked;
- (struct CGPoint)position;
- (void)setPosition:(struct CGPoint)arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
- (BOOL)horizontalFlip;
- (BOOL)verticalFlip;
- (float)shearXAngle;
- (float)shearYAngle;
- (struct CGSize)sizeOfBoundingBox;
- (struct CGPoint)nonrotatedPosition;
- (struct CGRect)naturalBounds;
- (struct CGAffineTransform)transform;
- (struct CGAffineTransform)transformHasVFlip:(BOOL)arg1 vFlip:(BOOL)arg2 hasHFlip:(BOOL)arg3 hFlip:(BOOL)arg4;

@end

