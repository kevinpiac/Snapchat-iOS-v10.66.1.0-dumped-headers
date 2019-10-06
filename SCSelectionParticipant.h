//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSelectionIdentifier;

@interface SCSelectionParticipant : NSObject <NSCopying>
{
    SCSelectionIdentifier *_identifier;
    NSString *_nameToDisplay;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCSelectionIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 nameToDisplay:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *nameToDisplay; // @synthesize nameToDisplay=_nameToDisplay;

@end
