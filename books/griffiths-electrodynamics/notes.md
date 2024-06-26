# Appendix 1

If dl is the infitisimal distance change
$$ dl = f du \hat u + g dv \hat v + h dw \hat w $$

Also we know using the property of partial differentials that

$$
dt = \frac{\partial t}{\partial u}du +
        \frac{\partial t}{\partial v}dv +
        \frac{\partial t}{\partial w}dw
$$

## Gradient

We know that gradient is defined as:
$$ \nabla t = \frac{dt}{dl} \hat{dl} $$
$$ dt = \nabla t \cdot dl $$

Using above value of $dt$ we get:

<body>
$$ dt = (\nabla t)_{u} f du \hat u + (\nabla t)_{v} g dv \hat v + (\nabla t)_{w} h dw \hat w  $$
</body>

Now using value of $dt$ we get:

<body>
$$ (\nabla t)_{u} = \frac{1}{f} \frac{\partial t}{\partial u} $$
$$ (\nabla t)_{v} = \frac{1}{g} \frac{\partial t}{\partial v} $$
$$ (\nabla t)_{w} = \frac{1}{h} \frac{\partial t}{\partial w} $$
</body>

Thus gradient is given by:

$$
\nabla t = \frac{1}{f}\frac{\partial t}{\partial u}\hat u +
\frac{1}{g}\frac{\partial t}{\partial v}\hat v +
\frac{1}{h}\frac{\partial t}{\partial w}\hat w.
$$

## Divergence

If we want to expand a vector along a particular coordinate, we have to
evaluate coordiante by coordinate. This increase is equal to the change in area
evaluated at $u + du$ and at $u$.
$$ F(u + du) - F(u) = \frac{\partial F}{\partial u}.du $$

WKT change in area vector:
$$ da = -(gh)dv dw \cap u $$
F(u) is given by divergence in area vector in the $\cap$ direction is
(because integral divergence over volume is equal to flux)
$$ F(u) = A.da = - A_u(gh)dv dw $$

Thus divergence along this unit vector is given by:

$$
\frac{\partial F}{\partial u}.du = \frac{\partial}{\partial u}(ghA_u)
\cdot du dv dw
 = \frac{1}{fgh} \frac{\partial}{\partial u} (gh A_u) d \tau
$$

$$
\oint A\cdot da = \frac{1}{fgh}\left[
\frac{\partial}{\partial u}(gh A_{u}) +
\frac{\partial}{\partial v}(fh A_{v}) +
\frac{\partial}{\partial w}(fg A_{w})
 \right] d\tau
$$

Using the divergence theorem
$$ \oint A \cdot da = (\nabla \cdot A ) d \tau $$

Thus we get divergance as,

$$
(\nabla \cdot A )  = \frac{1}{fgh}\left[
\frac{\partial}{\partial u}(gh A_{u}) +
\frac{\partial}{\partial v}(fh A_{v}) +
\frac{\partial}{\partial w}(fg A_{w})
 \right]
$$

## Curl

We know that curl is just line integral of a given vector (stokes). As done above
we can hold one variable constant ($w$) and change the other two variables. This
forms a rectangle (or any other rhomboidal shape for other curvillinear
coordinates).

We can say that curl will be line integral along the sides of the rectangle.
thus, integral of side $u$ is negetive of $u+du$.

Line integral is given by.

$$
\oint A\cdot dl = \left[ \frac{\partial}{\partial u}(gA_v) -
 \frac{\partial}{\partial u}(fA_u) \right] du dv
$$

$$
\oint A\cdot dl =\frac{1}{fg} \left[ \frac{\partial}{\partial u}(gA_v) -
 \frac{\partial}{\partial u}(fA_u) \right] \hat w.da
$$

If you take all coordinates and remoe area from both sides

$$
\nabla \times A \equiv
\frac{1}{gh} \left[ \frac{\partial}{\partial v}(h A_w) -
 \frac{\partial}{\partial w}(g A_v) \right] \hat u +
\frac{1}{fh} \left[ \frac{\partial}{\partial w}(f A_u) -
 \frac{\partial}{\partial u}(h A_w) \right] \hat v +
\frac{1}{fg} \left[ \frac{\partial}{\partial u}(g A_v) -
 \frac{\partial}{\partial u}(f A_u) \right] \hat w
$$

## Laplacian

Since laplacian is divergence of gradient you will see:

$$
\nabla^2 t = \frac{1}{fgh} \left[
\frac{\partial}{\partial u}\left( \frac{gh}{f} \frac{\partial t}{\partial u} \right) +
\frac{\partial}{\partial v}\left( \frac{fh}{g} \frac{\partial t}{\partial v} \right) +
\frac{\partial}{\partial w}\left( \frac{fg}{h} \frac{\partial t}{\partial w} \right)
 \right]
$$
