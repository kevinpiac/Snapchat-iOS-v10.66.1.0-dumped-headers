//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCSCOREAppInfo, SCSCOREGeoPoint, SCSCORETweaks, SCSSRVBarcodeSearchRequest, SCSSRVClientMetadata, SCSSRVImageSearchRequest;

@interface SCSSRVSearchRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSCOREAppInfo *appInfo; // @dynamic appInfo;
@property(retain, nonatomic) SCSSRVBarcodeSearchRequest *barcodeSearchRequest; // @dynamic barcodeSearchRequest;
@property(retain, nonatomic) SCSSRVClientMetadata *clientMetadata; // @dynamic clientMetadata;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(nonatomic) long long creationTimestampMsecs; // @dynamic creationTimestampMsecs;
@property(nonatomic) _Bool hasAppInfo; // @dynamic hasAppInfo;
@property(nonatomic) _Bool hasClientMetadata; // @dynamic hasClientMetadata;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasTweakParameters; // @dynamic hasTweakParameters;
@property(retain, nonatomic) SCSSRVImageSearchRequest *imageSearchRequest; // @dynamic imageSearchRequest;
@property(retain, nonatomic) NSMutableArray *languagePreferencesArray; // @dynamic languagePreferencesArray;
@property(readonly, nonatomic) unsigned long long languagePreferencesArray_Count; // @dynamic languagePreferencesArray_Count;
@property(retain, nonatomic) SCSCOREGeoPoint *location; // @dynamic location;
@property(nonatomic) int maxResults; // @dynamic maxResults;
@property(nonatomic) int origin; // @dynamic origin;
@property(readonly, nonatomic) int requestOneOfCase; // @dynamic requestOneOfCase;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(copy, nonatomic) NSString *sessionQueryId; // @dynamic sessionQueryId;
@property(retain, nonatomic) SCSCORETweaks *tweakParameters; // @dynamic tweakParameters;

@end

