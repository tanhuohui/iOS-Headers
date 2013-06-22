/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/PFUbiquityTransactionEntry.h>

@class NSURL;

@interface PFUbiquityTransactionEntry (UbiquityMethods)
+ (id)newTransactionEntryForObjectWithCompressedGlobalID:(id)arg1 withTransactionType:(int)arg2 importContext:(id)arg3;
+ (id)createTransactionEntriesForCompressedObjectIDs:(id)arg1 withTransactionType:(int)arg2 withImportContext:(id)arg3;
+ (id)createKnowledgeVectorByAddingKnowledgeVector:(id)arg1 toKnowledgeVector:(id)arg2;
+ (id)createKnowledgeVectorStringFromPeerDictionary:(id)arg1;
+ (id)createSumForKnowlegeVectorString:(id)arg1;
+ (id)createPeerCodeDictionaryFromVector:(id)arg1;
+ (BOOL)canMergeKnowledgeVector:(id)arg1 withKnowledgeVector:(id)arg2;
+ (id)transactionEntriesMatchingGlobalObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)transactionEntriesMatchingLocalObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)transactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesForGlobalIDStrings:(id)arg1 beforePeerState:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesForPeerID:(id)arg1 withTransactionNumber:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesForPeerID:(id)arg1 beforeTransacationNumber:(id)arg2 forStoreNamed:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)transactionEntryForGlobalIDString:(id)arg1 withActingPeerID:(id)arg2 atTransactionNumber:(id)arg3 inManagedObjectContext:(id)arg4;
- (id)initAndInsertIntoManagedObjectContext:(id)arg1;
@property int transactionType;
@property(readonly) NSURL *transactionLogURL;
@end

