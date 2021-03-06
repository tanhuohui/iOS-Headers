/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Message/DeliveryAccount.h>

@class MFSMTPConnection, NSTimer;

@interface SMTPAccount : DeliveryAccount
{
    Class _deliveryClass;
    MFSMTPConnection *_connection;
    NSTimer *_timer;
    int _lastTimerSetTime;
    unsigned int _supportsPipelining:1;
    unsigned int _supportsOutboxCopy:1;
    unsigned int _useCellDataOnly:1;
}

+ (id)accountTypeString;
+ (void *)keychainProtocol;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)newDefaultInstance;
+ (void)registerAppleServiceDeliveryHostname:(id)arg1;
+ (id)saslProfileName;
- (id)certUIService;
- (Class)deliveryClass;
- (void)setDeliveryClass:(Class)arg1;
- (unsigned int)defaultPortNumber;
- (id)serviceName;
- (BOOL)isCommonPortNumber:(unsigned int)arg1;
- (unsigned int)keychainPortNumber;
- (Class)connectionClass;
- (id)_defaultSettingsWithPort:(unsigned int)arg1 useSSL:(BOOL)arg2 directSSL:(BOOL)arg3;
- (id)connectionSettingsForAuthentication:(BOOL)arg1 secure:(id)arg2 insecure:(id)arg3;
- (id)secureConnectionSettings;
- (id)insecureConnectionSettings;
- (id)alternateConnectionSettings;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)preferredAuthScheme;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2;
- (BOOL)supportsPipelining;
- (void)setSupportsPipelining:(BOOL)arg1;
- (BOOL)supportsOutboxCopy;
- (void)setSupportsOutboxCopy:(BOOL)arg1;
- (struct __CFString *)connectionServiceType;
- (id)authenticatedConnection:(BOOL)arg1;
- (void)disconnect:(id)arg1;
- (void)connectionExpired:(id)arg1;
- (void)setTimer;
- (void)checkInConnection:(id)arg1;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (BOOL)_isAppleServiceDeliveryHostname:(id)arg1;
- (BOOL)canBeFallbackAccount;
- (void)setPasswordInKeychain:(id)arg1;
- (id)passwordFromKeychain;
- (void)dealloc;

@end

