//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray, NSNumber;

@interface SCMapPassportViewModel : SCComposerMarshallableObject
{
    _Bool _bucketInteractionEnabled;
    _Bool _shouldShowLoading;
    _Bool _showCharms;
    _Bool _canShowMemoriesCard;
    NSArray *_buckets;
    NSArray *_charms;
    NSArray *_entries;
    NSNumber *_state;
    NSNumber *_generatingProgress;
    long long _addMemoriesState;
}

- (void).cxx_destruct;
@property(nonatomic) long long addMemoriesState; // @synthesize addMemoriesState=_addMemoriesState;
@property(nonatomic) _Bool bucketInteractionEnabled; // @synthesize bucketInteractionEnabled=_bucketInteractionEnabled;
@property(copy, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
@property(nonatomic) _Bool canShowMemoriesCard; // @synthesize canShowMemoriesCard=_canShowMemoriesCard;
@property(copy, nonatomic) NSArray *charms; // @synthesize charms=_charms;
@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) NSNumber *generatingProgress; // @synthesize generatingProgress=_generatingProgress;
- (id)initWithBucketInteractionEnabled:(_Bool)arg1 buckets:(id)arg2 charms:(id)arg3 entries:(id)arg4 shouldShowLoading:(_Bool)arg5 showCharms:(_Bool)arg6 state:(id)arg7 generatingProgress:(id)arg8 canShowMemoriesCard:(_Bool)arg9 addMemoriesState:(long long)arg10;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(nonatomic) _Bool shouldShowLoading; // @synthesize shouldShowLoading=_shouldShowLoading;
@property(nonatomic) _Bool showCharms; // @synthesize showCharms=_showCharms;
@property(retain, nonatomic) NSNumber *state; // @synthesize state=_state;

@end

