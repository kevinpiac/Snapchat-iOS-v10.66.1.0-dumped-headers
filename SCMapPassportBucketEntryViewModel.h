//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCMapPassportBucketEntryViewModel : SCComposerMarshallableObject
{
    NSString *_bucketId;
    NSString *_countString;
    NSString *_title;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bucketId; // @synthesize bucketId=_bucketId;
@property(copy, nonatomic) NSString *countString; // @synthesize countString=_countString;
- (id)initWithBucketId:(id)arg1 countString:(id)arg2 title:(id)arg3;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

