//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIImage;
@protocol SCAddFriendsTakeOverWorkflowDelegate, SCUIContainer;

@interface SCAddFriendsTakeOverScope : NSObject
{
    id <SCUIContainer> _uiContainer;
    NSArray *_snapchatters;
    UIImage *_confettiImage;
    id <SCAddFriendsTakeOverWorkflowDelegate> _addFriendsTakeOverWorkflowDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCAddFriendsTakeOverWorkflowDelegate> addFriendsTakeOverWorkflowDelegate; // @synthesize addFriendsTakeOverWorkflowDelegate=_addFriendsTakeOverWorkflowDelegate;
@property(readonly, nonatomic) UIImage *confettiImage; // @synthesize confettiImage=_confettiImage;
- (id)initWithUIContainer:(id)arg1 addFriendsTakeOverWorkflowDelegate:(id)arg2 snapchatters:(id)arg3 confettiImage:(id)arg4;
@property(readonly, nonatomic) NSArray *snapchatters; // @synthesize snapchatters=_snapchatters;
@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;

@end

