/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCProfile.h>

@class NSString;

@interface MCProfile (Private)
+ (id)dataFromCMSEncodedData:(id)arg1 outSignerCertificates:(id *)arg2;
+ (id)signerSummaryOfCertificate:(struct __SecCertificate *)arg1;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 outIsAllowedToWriteDefaults:(_Bool *)arg2;
+ (int)evaluateTrustOfCertificateChain:(id)arg1;
+ (int)evaluateTrust:(struct __SecTrust *)arg1;
+ (_Bool)checkString:(id)arg1 isOneOfStrings:(id)arg2 key:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 errorString:(id)arg6 outError:(id *)arg7;
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id *)arg6;
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id *)arg8;
+ (id)removeOptionalObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id *)arg7;
+ (id)removeRequiredObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 missingDataCode:(long long)arg5 missingDataErrorString:(id)arg6 invalidDataCode:(long long)arg7 invalidDataErrorString:(id)arg8 outError:(id *)arg9;
+ (id)profileWithDictionary:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(_Bool)arg3 outError:(id *)arg4;
+ (id)profileDictionaryFromProfileData:(id)arg1 outError:(id *)arg2;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(_Bool)arg3 outError:(id *)arg4;
+ (id)missingFieldErrorWithField:(id)arg1;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)_malformedProfileError;
- (unsigned long long)countOfPayloadsOfClass:(Class)arg1;
- (_Bool)containsPayloadOfClass:(Class)arg1;
- (id)stubDictionary;
- (_Bool)writeStubToPath:(id)arg1;
- (_Bool)writeStubToDirectory:(id)arg1;
- (id)malformedProfileErrorWithError:(id)arg1;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(_Bool)arg2 outError:(id *)arg3;
@property(readonly, nonatomic) NSString *UUIDHashFileName;
@property(readonly, nonatomic) NSString *profileIDHashFileName;
@property(readonly, nonatomic) NSString *stubFileName;
@end

