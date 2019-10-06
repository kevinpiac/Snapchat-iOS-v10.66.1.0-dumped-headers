//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString;

@interface SCLensParser : NSObject <SCTraceEnabled>
{
}

+ (id)assetStorageOptionWithSOJULensAssetStorageOption:(id)arg1;
+ (id)assetStorageOptionsWithManifestItemStorageOptions:(id)arg1;
+ (id)bitmoji3DMetadataWithSOJUResponse:(id)arg1;
+ (id)dateFromString:(id)arg1 withFormaters:(id)arg2;
+ (unsigned long long)devicePositionFromSOJU:(long long)arg1;
+ (_Bool)isGeofilterResponseLens:(id)arg1;
+ (_Bool)isValidAssetStorageOption:(id)arg1;
+ (id)lensAssetWithSOJUBitmojiAsset:(id)arg1;
+ (id)lensAssetWithSOJUManifest:(id)arg1;
+ (id)lensManifestWithSojuResponse:(id)arg1;
+ (id)lensWithSOJUGeofilterResponse:(id)arg1 type:(long long)arg2 defaultExpiration:(id)arg3;
+ (id)scheduleIntervalsFromSchedule:(id)arg1;
+ (long long)snappablesReplyTypeFromSOJU:(long long)arg1;
+ (id)unavailableLensWithLens:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
