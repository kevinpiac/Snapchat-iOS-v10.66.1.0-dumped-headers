//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SOJUUnlockablesOndemandTemplate;

@interface SCOnDemandGeofilterCreativeDataBuilder : NSObject
{
    SOJUUnlockablesOndemandTemplate *_geofilterTemplate;
    NSArray *_textBoxMetadata;
    NSArray *_stickerMetadata;
    NSString *_draftId;
}

+ (id)withOnDemandGeofilterCreativeData:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDraftId:(id)arg1;
- (id)setGeofilterTemplate:(id)arg1;
- (id)setStickerMetadata:(id)arg1;
- (id)setTextBoxMetadata:(id)arg1;

@end

