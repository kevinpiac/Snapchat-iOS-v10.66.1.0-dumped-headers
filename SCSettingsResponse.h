//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, SOJUSettingsResponse;

@interface SCSettingsResponse : NSObject
{
    _Bool _success;
    NSError *_error;
    SOJUSettingsResponse *_parsedResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SOJUSettingsResponse *parsedResponse; // @synthesize parsedResponse=_parsedResponse;
@property(nonatomic) _Bool success; // @synthesize success=_success;

@end

