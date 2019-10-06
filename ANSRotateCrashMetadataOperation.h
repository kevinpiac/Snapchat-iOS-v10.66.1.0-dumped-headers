//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ANSCrashMetadata, ANSMetadata, NSDictionary, NSURL;

@interface ANSRotateCrashMetadataOperation : NSOperation
{
    NSURL *_crashMetadataURL;
    ANSMetadata *_currentMetadata;
    ANSCrashMetadata *_crashMetadata;
    NSDictionary *_currentMetadataDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ANSCrashMetadata *crashMetadata; // @synthesize crashMetadata=_crashMetadata;
@property(retain, nonatomic) NSURL *crashMetadataURL; // @synthesize crashMetadataURL=_crashMetadataURL;
@property(retain, nonatomic) ANSMetadata *currentMetadata; // @synthesize currentMetadata=_currentMetadata;
@property(retain, nonatomic) NSDictionary *currentMetadataDictionary; // @synthesize currentMetadataDictionary=_currentMetadataDictionary;
- (id)initWithCrashMetadataURL:(id)arg1 currentMetadata:(id)arg2;
- (void)main;

@end

