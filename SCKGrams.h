//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCKGrams : NSObject
{
    NSMutableDictionary *_multiSet;
    long long _gramCount;
    long long _gramSize;
}

- (void).cxx_destruct;
- (_Bool)_isValidGram:(id)arg1;
@property(readonly, nonatomic) long long gramSize; // @synthesize gramSize=_gramSize;
- (id)initWithString:(id)arg1 gramSize:(long long)arg2;
- (long long)multiplicityForGram:(id)arg1;
- (double)normalizedMultiplicityForGram:(id)arg1;

@end

