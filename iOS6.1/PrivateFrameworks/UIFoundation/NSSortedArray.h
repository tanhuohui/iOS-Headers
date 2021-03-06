/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableArray.h"

@interface NSSortedArray : NSMutableArray
{
    NSMutableArray *_array;
    SEL _compareSelector;
    unsigned int _cachedCount;
    id _cachedFirstObject;
}

+ (void)initialize;
- (void)sortUsingSelector:(SEL)arg1;
- (void)sortUsingFunction:(void *)arg1 context:(void *)arg2;
- (void)setArray:(id)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeLastObject;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)_insertObjectInSortOrder:(id)arg1;
- (void)dealloc;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(id *)arg1 count:(unsigned int)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)setCompareSelector:(SEL)arg1;
- (SEL)compareSelector;
- (id)init;
- (id)initWithCompareSelector:(SEL)arg1;
- (id)initWithCapacity:(unsigned int)arg1 compareSelector:(SEL)arg2;

@end

