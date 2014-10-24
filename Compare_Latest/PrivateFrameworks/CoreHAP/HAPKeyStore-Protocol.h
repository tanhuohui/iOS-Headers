//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, NSUUID;

@protocol HAPKeyStore <NSObject>
- (BOOL)removeAllAccessoryKeys:(id *)arg1;
- (BOOL)removeAccessoryKeyForName:(NSString *)arg1 error:(id *)arg2;
- (BOOL)registerAccessoryWithHomeKit:(NSString *)arg1 error:(id *)arg2;
- (BOOL)savePublicKey:(NSData *)arg1 forAccessoryName:(NSString *)arg2 error:(id *)arg3;
- (NSData *)readPublicKeyForAccessoryName:(NSString *)arg1 registeredWithHomeKit:(char *)arg2 error:(id *)arg3;
- (BOOL)removeControllerKeyPairForIdentifier:(NSString *)arg1 error:(id *)arg2;
- (BOOL)getCurrentiCloudIdentifier:(id *)arg1 controllerPairingIdentifier:(id *)arg2 error:(id *)arg3;
- (BOOL)updateCurrentiCloudIdentifier:(NSString *)arg1 controllerPairingIdentifier:(NSString *)arg2 error:(id *)arg3;
- (BOOL)removeControllerKeyPairWithError:(id *)arg1;
- (BOOL)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 username:(id *)arg3 allowCreation:(BOOL)arg4 error:(id *)arg5;

@optional
- (NSDictionary *)getPeripherialIdentifiersAndAccessoryNames;
- (NSUUID *)readPeripheralIdentifierForAccessoryName:(NSString *)arg1 error:(id *)arg2;
- (BOOL)deleteAllPeripheralIdentifiers:(id *)arg1;
- (BOOL)deletePeripheralIdentifierForAccessoryName:(NSString *)arg1 error:(id *)arg2;
- (BOOL)updatePeripheralIdentifier:(NSUUID *)arg1 forAccessoryName:(NSString *)arg2 error:(id *)arg3;
- (BOOL)savePeripheralIdentifier:(NSUUID *)arg1 forAccessoryName:(NSString *)arg2 error:(id *)arg3;
@end
