//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCSLSUserDemographics;

@interface SCSLSQueryInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *anonymizedUserIdentifier; // @dynamic anonymizedUserIdentifier;
@property(copy, nonatomic) NSString *appBuild; // @dynamic appBuild;
@property(copy, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) long long clientTsHourForFirstQuery; // @dynamic clientTsHourForFirstQuery;
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) _Bool hasUserDemographics; // @dynamic hasUserDemographics;
@property(copy, nonatomic) NSString *hashedGhostId; // @dynamic hashedGhostId;
@property(nonatomic) long long millisecondsSinceFirstQuery; // @dynamic millisecondsSinceFirstQuery;
@property(copy, nonatomic) NSString *osType; // @dynamic osType;
@property(nonatomic) _Bool queryIsPrefetch; // @dynamic queryIsPrefetch;
@property(nonatomic) _Bool queryIsSuggestion; // @dynamic queryIsSuggestion;
@property(copy, nonatomic) NSString *region; // @dynamic region;
@property(copy, nonatomic) NSString *s2CellId; // @dynamic s2CellId;
@property(nonatomic) int searchQueryContext; // @dynamic searchQueryContext;
@property(nonatomic) long long searchQueryId; // @dynamic searchQueryId;
@property(copy, nonatomic) NSString *searchQueryText; // @dynamic searchQueryText;
@property(nonatomic) int searchQueryType; // @dynamic searchQueryType;
@property(copy, nonatomic) NSString *searchSessionId; // @dynamic searchSessionId;
@property(retain, nonatomic) SCSLSUserDemographics *userDemographics; // @dynamic userDemographics;
@property(retain, nonatomic) NSMutableArray *userLanguagePreferencesArray; // @dynamic userLanguagePreferencesArray;
@property(readonly, nonatomic) unsigned long long userLanguagePreferencesArray_Count; // @dynamic userLanguagePreferencesArray_Count;

@end

