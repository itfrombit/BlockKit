//
//  UIControl-BKAdditions.h
//  BlockPlayground
//
//  Created by Nick Paulson on 7/16/11.
//  Copyright 2011 Linebreak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIControl (BKAdditions)

- (void)addActionForControlEvents:(UIControlEvents)controlEvents usingBlock:(void (^) (void))block;
- (void)removeAllBlocks;

@end
