//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSValue, UIPanGestureRecognizer, UIScrollView, WCStoryComment;

@protocol WCStoryFriendVisitorListViewDelegate <NSObject>
- (void)StoryFriendVisitorListViewDidClickHeadViewWithComment:(WCStoryComment *)arg1;
- (NSValue *)StoryFriendVisitorListViewCollectionViewContentInset;
- (void)StoryFriendVisitorListViewScrollView:(UIScrollView *)arg1 receivePanGesture:(UIPanGestureRecognizer *)arg2;
@end

