/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject
{
    NSManagedObjectID *_objectID;
    unsigned int __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
- (id)init;
- (id)initWithObjectID:(id)arg1;
- (void)dealloc;
- (id)objectID;
- (unsigned int)_versionNumber;
- (void)_setVersionNumber:(unsigned int)arg1;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (BOOL)isEqual:(id)arg1;
- (id)propertyCache;
- (void)setPropertyCache:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

