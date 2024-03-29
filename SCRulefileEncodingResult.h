//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface SCRulefileEncodingResult : NSObject
{
    NSString *_encodingString;
    NSURL *_directStorageURL;
    NSString *_base64ContentDescriptor;
    NSString *_encodingErrorReason;
    NSString *_rulefileName;
    NSString *_rulefileVersionId;
    NSDate *_metaDataDownloadTime;
    long long _bandwithWhenDonwloadMetadata;
}

- (void).cxx_destruct;
@property(nonatomic) long long bandwithWhenDonwloadMetadata; // @synthesize bandwithWhenDonwloadMetadata=_bandwithWhenDonwloadMetadata;
@property(copy, nonatomic) NSString *base64ContentDescriptor; // @synthesize base64ContentDescriptor=_base64ContentDescriptor;
@property(copy, nonatomic) NSURL *directStorageURL; // @synthesize directStorageURL=_directStorageURL;
@property(copy, nonatomic) NSString *encodingErrorReason; // @synthesize encodingErrorReason=_encodingErrorReason;
@property(copy, nonatomic) NSString *encodingString; // @synthesize encodingString=_encodingString;
@property(retain, nonatomic) NSDate *metaDataDownloadTime; // @synthesize metaDataDownloadTime=_metaDataDownloadTime;
@property(copy, nonatomic) NSString *rulefileName; // @synthesize rulefileName=_rulefileName;
@property(copy, nonatomic) NSString *rulefileVersionId; // @synthesize rulefileVersionId=_rulefileVersionId;

@end

