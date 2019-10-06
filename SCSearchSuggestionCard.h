//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface SCSearchSuggestionCard : NSObject <NSCopying, NSCoding>
{
    NSString *_displayText;
    NSString *_queryText;
    NSURL *_imageURL;
    long long _suggestionCardType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayText:(id)arg1 queryText:(id)arg2 imageURL:(id)arg3 suggestionCardType:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(readonly, nonatomic) long long suggestionCardType; // @synthesize suggestionCardType=_suggestionCardType;

@end

