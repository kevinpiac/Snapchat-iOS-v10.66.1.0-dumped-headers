//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString;

@interface SCLensExplorerSearchActiveUserInfo : SCComposerMarshallableObject
{
    NSNumber *_age;
    NSString *_countryCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)initWithAge:(id)arg1 countryCode:(id)arg2;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end

