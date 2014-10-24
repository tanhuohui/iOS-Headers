//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GEOResourceManifestConfiguration : NSObject
{
    unsigned int _tileGroupIdentifier;
    NSString *_os;
    NSString *_osVersion;
    NSString *_osBuild;
    NSString *_countryCode;
    NSString *_hardwareIdentifier;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_environment;
}

@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(copy, nonatomic) NSString *hardwareIdentifier; // @synthesize hardwareIdentifier=_hardwareIdentifier;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(nonatomic) unsigned int tileGroupIdentifier; // @synthesize tileGroupIdentifier=_tileGroupIdentifier;
- (id)directorySuffix;
- (BOOL)isDefaultConfiguration;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)conciseDictionaryRepresentation;
- (id)initWithConciseDictionaryRepresentation:(id)arg1;
- (void)dealloc;
- (id)init;

@end
