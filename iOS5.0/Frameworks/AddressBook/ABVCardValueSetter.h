/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ABVCardValueSetter : NSObject
{
}

- (BOOL)propertyIsValidForPerson:(unsigned int)arg1;
- (BOOL)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (void *)valueForProperty:(unsigned int)arg1;
- (BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (BOOL)setImageData:(id)arg1;
- (id)imageData;
- (id)fullName;
- (void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned int)arg2;

@end
