//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSDictionary, NSNumber, NSString;

@interface SCContextModalPresentationInfo : SCComposerMarshallableObject
{
    NSString *_requestType;
    NSDictionary *_requestParams;
    NSString *_style;
    NSNumber *_height;
    NSNumber *_allowSwipeToDismiss;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *allowSwipeToDismiss; // @synthesize allowSwipeToDismiss=_allowSwipeToDismiss;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
- (id)initWithRequestType:(id)arg1 requestParams:(id)arg2 style:(id)arg3 height:(id)arg4 allowSwipeToDismiss:(id)arg5;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(copy, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
@property(copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;

@end

